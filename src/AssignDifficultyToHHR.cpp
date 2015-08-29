/*
 * AssignDifficultyToHHR.cpp
 *
 *  Created on: Aug 29, 2015
 *      Author: rafae
 */

#include "AssignDifficultyToHHR.h"

#include <cstdio>
#include <cstring>
#include <cwchar>
#include <iostream>
#include <string>

AssignDifficultyToHHR::AssignDifficultyToHHR(char* theRootName) :
AssignDifficultyInterface(theRootName) {
	// TODO Auto-generated constructor stub

}
int AssignDifficultyToHHR::analysisDocument() {

	char line[500];
	int counter = 0;
	string inFilename(inputFileLocation);
	inFilename += "/";
	inFilename += rootName;
	inFilename += "/";
	inFilename += "/query.hhr";
	//cout<<inFilename<<endl;
	FILE* fptr = fopen((char*) inFilename.c_str(), "r");
	if (fptr == NULL) {
		cout << "input file: " << inFilename << " can't open" << endl;
	}

	while (fgets(line, 500, fptr) != NULL) {
		//cout<<line<<endl;
		if (strstr(line, "Probab=") != NULL) {
			//set second block information
			float probab;
			char* pos1 = strstr(line, "=");
			sscanf(pos1 + 1, "%f", &probab);

			char* pos2 = strstr(pos1 + 1, "=");
			double eValue;
			sscanf(pos2 + 1, "%lf", &eValue);
			//cout<<eValue<<endl;
			if(eValue<0.001){
				counter++;
			}

		}
	}

	fclose(fptr);
	//cout<<"counter is "<<counter<<endl;
	return counter;

}
AssignDifficultyToHHR::~AssignDifficultyToHHR() {
	// TODO Auto-generated destructor stub
}

