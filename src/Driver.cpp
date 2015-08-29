//============================================================================
// Name        : Utility.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstdlib>
#include <cstring>
#include <iostream>

#include "AssignDifficultyToBlaPDB.h"
#include "AssignDifficultyToHHR.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 4) {
		cout << "not enough arguments" << endl;
		cout << "<executable> <type> <proteinName> <threshold>" << endl;
		return -1;
	}

	// -blaPDB T0837
	if (strcmp(argv[1], "-blaPDB") == 0) {
		AssignDifficultyToBlaPDB assignDifficultyToBlaPDB(argv[2]);
		assignDifficultyToBlaPDB.loadConfigurationFile();
		int numOfEValueOkay = assignDifficultyToBlaPDB.analysisDocument();
		//cout<<numOfEValueOkay<<endl;
		int threshold = atoi(argv[3]);
		//cout<<threshold<<endl;
		cout << "The difficulty of " << argv[2] << " is "
				<< assignDifficultyToBlaPDB.findDifficulty(numOfEValueOkay,
						threshold) << endl;

	} else if (strcmp(argv[1], "-hhr") == 0) {
		AssignDifficultyToHHR assignDifficultyToHHR(argv[2]);
		assignDifficultyToHHR.loadConfigurationFile();
		int numOfEValueOkay = assignDifficultyToHHR.analysisDocument();
		int threshold = atoi(argv[3]);
		cout << "The difficulty of " << argv[2] << " is "
				<< assignDifficultyToHHR.findDifficulty(numOfEValueOkay,
						threshold) << endl;

	}

	return 0;
}
