/*
 * AssignDifficultyToBlaPDB.cpp
 *
 *  Created on: Aug 24, 2015
 *      Author: rafae
 */

#include "AssignDifficultyToBlaPDB.h"

#include <cstdio>
#include <cstring>
#include <cwchar>
#include <iostream>
#include <string>

AssignDifficultyToBlaPDB::AssignDifficultyToBlaPDB(char* theRootName) :
		AssignDifficultyInterface(theRootName) {
	// TODO Auto-generated constructor stub

}
int AssignDifficultyToBlaPDB::analysisDocument() {

	char line[500];
	int counter = 0;
	string inFilename(inputFileLocation);
	inFilename += "/";
	inFilename += rootName;
	inFilename += "/";
	inFilename += "/query.blaPDB";
	//cout<<inFilename<<endl;
	FILE* fptr = fopen((char*) inFilename.c_str(), "r");
	if (fptr == NULL) {
		cout << "input file: " << inFilename << " can't open" << endl;
	}

	while (fgets(line, 500, fptr) != NULL) {
		//cout<<line<<endl;
		if (strstr(line, "Score =") != NULL) {
			//set second block information
			float score;
			char* pos1 = strstr(line, "=");
			sscanf(pos1 + 1, "%f", &score);

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
AssignDifficultyToBlaPDB::~AssignDifficultyToBlaPDB() {
	// TODO Auto-generated destructor stub
}

