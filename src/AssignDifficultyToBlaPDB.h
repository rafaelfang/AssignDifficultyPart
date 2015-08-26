/*
 * AssignDifficultyToBlaPDB.h
 *
 *  Created on: Aug 24, 2015
 *      Author: rafae
 */

#ifndef ASSIGNDIFFICULTYTOBLAPDB_H_
#define ASSIGNDIFFICULTYTOBLAPDB_H_

#include "AssignDifficultyInterface.h"

class AssignDifficultyToBlaPDB: public AssignDifficultyInterface {
public:
	AssignDifficultyToBlaPDB(char*);

	virtual int analysisDocument();


	virtual ~AssignDifficultyToBlaPDB();
};

#endif /* ASSIGNDIFFICULTYTOBLAPDB_H_ */
