Program: RelExt version 1.0

Released by: Rodrigo Capucha, Karim Elyaouti, Margarete Mühlleitner, Johann Plotnikov, Rui Santos

Manual: version 1.0

[TODO]
We present the C++ program `RelExt` for Standard Model (SM) extensions that feature
a Dark Matter (DM) candidate. The tool allows to efficiently scan the parameter spaces
of these models to find parameter combinations that lead to relic density values which are
compatible with the measured value within the uncertainty specified by the user. The code
computes the relic density for freeze-out (co-)annihilation processes. The user can choose
between several pre-installed models or any arbitrary other model featuring a discrete Z2
symmetry, by solely providing the corresponding FeynRules model files. The code auto-
matically generates the required (co-)annihilation amplitudes and thermally averaged cross
sections, including the total widths in the s-channel mediators, and solves the Boltzmann
equation to determine the relic density. It can easily be linked to other tools like e.g. [ScannerS](https://gitlab.com/jonaswittbrodt/ScannerS/-/tree/HiggsTools?ref_type=heads)
to check for the relevant theoretical and experimental constraints, or to [BSMPT](https://github.com/phbasler/BSMPT) to investigate
the phase history of the model and possibly related gravitational waves signals.


The models implemented so far are

  - CP in the Dark ([arXiv 1807.10322](https://arxiv.org/abs/1807.10322), [arXiv 2204.13425](https://arxiv.org/abs/2204.13425))
  - Complex Singlet Extension (CxSM)[arXiv 1301.2599](https://arxiv.org/abs/1301.2599)
  - N2HDM Dark doublet Phase (DDP) [arXiv 2004.05382](https://arxiv.org/abs/2004.05382), [arXiv 2104.03184](http://arxiv.org/abs/2104.03184)
  - Two Real Singlet Model (TRSM) [arXiv 1501.00206](https://arxiv.org/abs/1501.00206), [arXiv 1908.08554](https://arxiv.org/abs/1908.08554)
  - BDM5 [arXiv 2007.05082](https://arxiv.org/abs/2007.05082),[arXiv 2207.11556](https://arxiv.org/abs/2207.11556)

    
The code is structured such that users can add their own models.

The programm can be downladed at: https://github.com/jplotnikov99/RelExt_new/

Sample input and output files are provided.

For additional information, comments, complaints or suggestions please e-mail to: johann.plotnikov@partner.kit.edu, open a corresponding issue or start a discussion.


## Citation:

If you use this program for your work please cite
### TODO
 - some papers

## Installation:

### Dependencies

RelExt uses cmake as build tool for the C++ source code. 
To implement new models in RelExt, it is required to have `Mathematica v12` or higher with the packages FeynRules [citation] and FeynCalc v9.3.1 [arXiv 2001.04407](https://arxiv.org/abs/2001.04407),[arXiv 2312.14089](https://arxiv.org/abs/2312.14089)/FeynArts v3.11 [arXiv 0012260](http://arxiv.org/abs/hep-ph/0012260) installed.

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





