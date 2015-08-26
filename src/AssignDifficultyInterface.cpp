/*
 * AssignDifficultyInterface.cpp
 *
 *  Created on: Aug 24, 2015
 *      Author: rafae
 */

#include "AssignDifficultyInterface.h"
#include <stdio.h>
#include <cstring>
#include <cwchar>
#include <fstream>
#include <iostream>
#include "json/json.h"

AssignDifficultyInterface::AssignDifficultyInterface(char* rootname) {
	// TODO Auto-generated constructor stub
	setRootName(rootname);
}
void AssignDifficultyInterface::loadConfigurationFile() {
	Json::Reader reader;
	Json::Value root;

	//read from file
	ifstream is;
	is.open("configuration.json", ios::binary);

	if (reader.parse(is, root)) {

		inputFileLocation = root["inputFileLocation"].asString();

	}
	//cout<<inputFileLocation<<endl;
	is.close();
}

int AssignDifficultyInterface::findDifficulty(int numOfEValOkay,
		int threshold) {
	if (numOfEValOkay == 0) {
		return 0;//hard case
	} else if (numOfEValOkay > 0 && numOfEValOkay < threshold) {
		return 1;//medium case
	} else {
		return 2;//easy case
	}
}

AssignDifficultyInterface::~AssignDifficultyInterface() {
	// TODO Auto-generated destructor stub
}

char* AssignDifficultyInterface::getRootName() {
	return rootName;
}

void AssignDifficultyInterface::setRootName(char* rootName) {
	this->rootName = rootName;
}
