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

You can build the program with 

        cd path/to/DarkTree
        mkdir build && cd build  
        cmake ..  
        make (-j)


## How to add a new model (for further details, also see the manual):

To add a new model you have to:

1. Go to the source directory path/to/DarkTree.
2. Generate a new model folder via
       ./model -n NameOfYourModel
This will generate you a folder called md_NameOfYourModel and creates a new entry in the CMakeLists.txt .


