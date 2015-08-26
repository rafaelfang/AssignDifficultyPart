/*
 * AssignDifficultyInterface.h
 *
 *  Created on: Aug 24, 2015
 *      Author: rafae
 */

#ifndef ASSIGNDIFFICULTYINTERFACE_H_
#define ASSIGNDIFFICULTYINTERFACE_H_
#include <string>
#include <vector>
using namespace std;
class AssignDifficultyInterface {
public:
	AssignDifficultyInterface(char*);

	virtual int analysisDocument()=0;

	int findDifficulty(int, int);
	void loadConfigurationFile();

	virtual ~AssignDifficultyInterface();
	char* getRootName();
	void setRootName(char* rootName);

protected:
	char * rootName;
	string inputFileLocation;
};

#endif /* ASSIGNDIFFICULTYINTERFACE_H_ */
