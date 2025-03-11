Program: RelExt version 1.0

Released by: Rodrigo Capucha, Karim Elyaouti, Margarete Mühlleitner, Johann Plotnikov, Rui Santos

Manual: version 1.0

RelExt - Relic Density Calculator for Extended Models:

RelExt is a C++ program designed to efficiently scan the parameter spaces of beyond-the-Standard-Model (BSM) scenarios featuring dark matter candidates to identify parameter combinations that yield a relic density compatible with the measured value, within a user-specified uncertainty.

The code computes the relic density for freeze-out (co-)annihilation processes and supports multiple pre-installed models as well as any other model with a discrete Z2 symmetry. In this case, the user solely has to provide the corresponding FeynRules model files. It automatically generates the required (co-)annihilation amplitudes and thermally averaged cross-sections, including total widths in s-channel mediators, and solves the Boltzmann equation to determine the relic density.

RelExt can be easily linked to external tools such as [ScannerS](https://gitlab.com/jonaswittbrodt/ScannerS/-/tree/HiggsTools?ref_type=heads), which scans the parameter spaces of extended Higgs sectors and checks for the most relevant theoretical and experimental constraints, or to [BSMPT](https://github.com/phbasler/BSMPT), which investigates BSM Higgs sectors with respect to their phase history in the early universe and possibly related gravitational waves signals.

The models implemented so far are

  - CP in the Dark ([arXiv 1807.10322](https://arxiv.org/abs/1807.10322), [arXiv 2204.13425](https://arxiv.org/abs/2204.13425))
  - Complex Singlet Extension (CxSM) ([arXiv 1301.2599](https://arxiv.org/abs/1301.2599))
  - N2HDM Dark Doublet Phase (DDP) ([arXiv 2004.05382](https://arxiv.org/abs/2004.05382), [arXiv 2104.03184](http://arxiv.org/abs/2104.03184))
  - Two Real Singlet Model (TRSM) ([arXiv 1501.00206](https://arxiv.org/abs/1501.00206), [arXiv 1908.08554](https://arxiv.org/abs/1908.08554))
  - BDM5 ([arXiv 2007.05082](https://arxiv.org/abs/2007.05082), [arXiv 2207.11556](https://arxiv.org/abs/2207.11556))

    
The code is structured such that users can add their own models.

The programm can be downladed at https://github.com/jplotnikov99/RelExt_new/

Sample input and output files are provided there as well.

For additional information, comments, complaints or suggestions please e-mail to: relext@lists.kit.edu, open a corresponding issue or start a discussion.


## Citation:

If you use this program for your work please cite
### TODO
 - some papers

## Installation:

### Dependencies

RelExt uses cmake as build tool for the C++ source code. 
To implement new models in RelExt, it is required to have `Mathematica v12` or higher with the packages FeynRules [citation], FeynCalc v9.3.1 ([arXiv 2001.04407](https://arxiv.org/abs/2001.04407),[arXiv 2312.14089](https://arxiv.org/abs/2312.14089)) and FeynArts v3.11 ([arXiv 0012260](http://arxiv.org/abs/hep-ph/0012260)) installed.

### Build

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
       `make [ModelName]`.
This will create a folder named `md_YourModel` and automatically add an entry to `CMakeLists.txt`.

3. Place your FeynRules model file (modelfiles.fr) in the directory /md_YourModel/FR_modfiles.

4. In the source directory execute
    `./model -l Path/To/FeynRules [ModelName].fr NameOfTheLagrangian`.
Here, `NameOfTheLagrangian`corresponds to the name of the Lagrangian defined in your FeynRules file. This will generate the necessary FeynArts files to calculate the Dark Matter annihilation amplitudes squared.

5. To complete the implementation of the new model, recompile your project again.


## Running the Code
To run the code for a specific model, type

    cd build 
    ./[ModelName] [InputFile] [OutputFile]
where:
  - `[InputFile]`: Path to the input file containing the necessary model parameters. 
  - `[OutPutfile]`  Path to the directory where `RelExt` will generate and store the output results.

### Main File

Each model folder contains a main.cpp file that can be modified as needed. A table of available functions can be found in the [manual]() of RelExt.





