//outside libs
#include <iostream>
#include  <stdlib.h> 



//my libs

#include "InitProgram.h"
#include "Menu.h"


using namespace std;


int main()
{
	//maxY = LINES-1 = 32   ;   maxX = COLS-1 = 146


	//singleton pattern for initialization PDCUrses methods and ztuff
	InitProgram::getInstance();

	//menu creation i while loop programa
	Menu meni;
	meni.drawMenu();




	return 0;
}

