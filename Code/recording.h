#include<stdlib.h>
#include <windows.h>
#include "liveTesting.h"
static int score = 0;
static int record1(int n){
	//n will decide question number 
	//dictact question
	//wait for 3 sec , open commandpropmt 
	char * convert= "Recording_Module.exe 3 input_file.wav testing.txt";  
	system(convert);  //Converting the file into png format
	int digit;		 //
	digit = online_testingQ(n);
	
	return digit;
}
