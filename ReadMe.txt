====================================================================================================
System Requirements
====================================================================================================
dot Net version 4.0(or Later)
Visual Studio 2010(If you need to build the project)

====================================================================================================
CONTENTS
====================================================================================================
1. There are four folders in this project
	i.	29_video
	ii.	29_documentation
	iii.    29_setup
	iv.	29_code
	
2. 29_video folder contains the demonstration of the software starting from installation to 
	explanation of all the features.
3. 29_documentation folder contains the documentation of our project. It also contains the pdf 
	versions of all the source code files in case of accidental deletion of main source code files 
	from VS project.
4. 29_setup folder contains the standalone application of our project which one can use to install 
	the software.
5. 29_code folder conatins the visual studio project which one can use to rebuild the 
	executable.
=========================================================================================================
Instruction to run the code ::
=========================================================================================================
Option 1. Please run InteractiveQuiz.exe and install the program in the system. You can uninstall the program from control panel.
If option 1 is not working properly , you could try option 2 to run the project.
Option 2. Download the zip file and extract it .
Open the extracted folder in visual studio and run with "Run without debugging " option or any other option to run the code.

File format::
--------------
Traing word files::
-------------------
	All the 20 utterrances of three words CAR, LAPTOP and THREE are stored in separate directries with their respective names .

Files containing models of words used in the project ::
-------------------------------------------------------
All the trained models A_0 to A_12 and B_0 to B_12 are stored in separate files .
Codebook file is present in codebook11.txt .
Output files (like A_car and B_car) for the new training examples will be generated when the player will train the word . 