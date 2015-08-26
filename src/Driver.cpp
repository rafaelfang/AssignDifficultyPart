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

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 4) {
		cout << "not enough arguments" << endl;
		cout << "<executable> <type> <proteinName> <threshold>" << endl;

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
						threshold)<<endl;;

	}

	return 0;
}
