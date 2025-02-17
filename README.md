Program: DarkTree version 1.0

Released by: Rodrigo Capucha, Karim Elyaouti, Margarete Mühlleitner, Johann Plotnikov, Rui Santos

Manual: version 1.0

[TODO]
DarkTree: The C++ program DarkTree is a tool to efficiently search parameter spaces of extension of the Standard Model. 
calculates the dark matter relic density in extensions of the Standard Model. For this the annihillation amplitudes, cross sections and thermal average cross sections are calculated and the boltzmann equation is solved. 


The models implemented so far are

  - CP in the Dark ([arXiv 1807.10322](https://arxiv.org/abs/1807.10322), [arXiv 2204.13425](https://arxiv.org/abs/2204.13425))
  - Complex Singlet Extension (CxSM)
  - N2HDM Dark doublet Phase (DDP)
  - Two Real Singlet Model (TRSM)
  - BDM5

    
The code is structured such that users can add their own models.

The programm can be downladed at: https://github.com/jplotnikov99/darktree_new/

Sample input and output files are provided.

For additional information, comments, complaints or suggestions please e-mail to: johann.plotnikov@partner.kit.edu, open a corresponding issue or start a discussion.


## Citation:

If you use this program for your work please cite
### TODO
 - some papers

## Installation:

### Dependencies

DarkTree uses cmake as build tool for the C++ source code. 
To implement new models in RelExt, it is required to have Mathematica with the packages FeynRules [citation] and FeynCalc[citation]/FeynArts[citation] installed.

### build

You can build the program with 

        cd path/to/RelExt
        mkdir build && cd build  
        cmake ..  
        make (-j)


## How to add a new model (for further details, also see the manual):

To add a new model you have to:

1. Navigate to the source directory
        `path/to/RelExt`.

2. Run the following command, replacing [ModelName] with your desired model name:
       `make [ModelName]`
This will create a folder named `md_YourModel` and automatically add an entry to `CMakeLists.txt`.

3. Place your FeynRules model file (modelfiles.fr) in the directory /md_YourModel/FR_modfiles.

4. From the source directory execute
    `./model -l Path/To/FeynRules [ModelName].fr NameOfTheLagrangian`.
Here, `NameOfTheLagrangian`corresponds to the full Lagrangian name defined in your FeynRules file. This will generate the necessary FeynArts files to calculated the Dark Matter annihilation amplitudes squared.

5. To complete the implementation of the new model, recompile your project again.


## Running the Code
To run the code for a specific model, type

    cd build 
    ./[ModelName] [InputFile] [OutputFile]
where:
  - `[InputFile]`: Path to the input file containing the necessary model parameters. 
  - `[OutPutfile]`  Path where `RelExt` will generate and store the output results.

### Main File [ToDo]

Each model folder contains a main.cpp file that can be modified as needed. A table of available functions can be found in the [Manual](google.com) of RelExt.





