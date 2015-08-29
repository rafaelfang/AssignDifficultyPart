/*
 * AssignDifficultyToHHR.h
 *
 *  Created on: Aug 29, 2015
 *      Author: rafae
 */

#ifndef ASSIGNDIFFICULTYTOHHR_H_
#define ASSIGNDIFFICULTYTOHHR_H_

#include "AssignDifficultyInterface.h"

class AssignDifficultyToHHR: public AssignDifficultyInterface {
public:
	AssignDifficultyToHHR(char*);

	virtual int analysisDocument();

	virtual ~AssignDifficultyToHHR();
};

#endif /* ASSIGNDIFFICULTYTOHHR_H_ */
