Program: DarkTree version 1.0

Released by: Rodrigo Capucha, Karim Elyaouti, Margarete Mühlleitner, Johann Plotnikov, Rui SantosManual: version 2.0


#### TODO
DarkTree: The C++ program DarkTree is a tool to efficiently search parameter spaces of extension of the Standard Model. 
calculates the dark matter relic density in extensions of the Standard Model. For this the annihillation amplitudes, cross sections and thermal average cross sections are calculated and the boltzmann equation is solved. 



The models implemented so far are

    CP in the Dark (arXiv 1807.10322, arXiv 2204.13425)
    Complex Singlet Extension (CxSM)

The code is structured such that users can add their own models.

The programm can be downladed at: https://github.com/jplotnikov99/darktree_new/

Sample input and output files are provided.

For additional information, comments, complaints or suggestions please e-mail to: johann.plotnikov@partner.kit.edu, open a corresponding issue or start a discussion.


### Citation:

If you use this program for your work please cite
### TODO
 - some papers

## Installation:

### Dependencies

DarkTree uses cmake as build tool for the C++ source code. 
To implement new models in DarkTree, it is required to have Mathematica with the packages FeynRules [citation] and FeynCalc[citation]/FeynArts[citation] installed.

### build

With the dependencies and options you can build the program with 
        
        mkdir build && cd build  
        cmake ..  
        make (-j)


## How to add a new model (for further details, also see the manual):

To add a new model you have to modify/create five files  

1. Go to include/BSMPT/models and copy ClassTemplate.h to YourModel.h. Adjust the Class_Template name to your new model. For step 5 I will assume that your class is named Class_YourModel. 

2. Go to src/models and copy ClassTemplate.cpp to YourModel.cpp, and change the Class_Template class name in the file to your model name. Also follow the instructions in here and in the manual to set up your new model. 

3. For your model to compile you have to open src/models/CMakeLists.txt and add ${header_path}/YourModel.h in the set(header enviroment as well as YourModel.cpp in the set(src enviroment)

4. In include/BSMPT/models/IncludeAllModels.h you need to add a new entry in the ModelIDs enum above the `stop` entry which is different from the ones already in the enum, e.g. YourModel. Additionally, you have to create a new entry in the `const std::unordered_map<std::string,ModelIDs> ModelNames` map in the same file and add a new line with {"YourModelName",ModelIDs::YourModel} , the matching will be done automatically.
Then you can call your model with `./binary YourModelName ...` .

5. In src/models/IncludeAllModels.cpp you have to add `#include <BSMPT/models/YourModel.h>` to the include list. Also to actually call your model you have to extend the FChoose function. For this you add a new case to the switch statement, which reads

        case ModelIDs::YourModel: return std::make_unique<Class_YourModel>(); break;
    
