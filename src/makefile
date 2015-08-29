assignDifficulty: jsoncpp.o Driver.o AssignDifficultyInterface.o AssignDifficultyToHHR.o AssignDifficultyToBlaPDB.o 
	g++ jsoncpp.o Driver.o AssignDifficultyInterface.o AssignDifficultyToHHR.o AssignDifficultyToBlaPDB.o  -o assignDifficulty

jsoncpp.o: jsoncpp.cpp
	g++ -c jsoncpp.cpp
	
Driver.o: Driver.cpp
	g++ -c Driver.cpp
	
AssignDifficultyInterface.o: AssignDifficultyInterface.cpp
	g++ -c AssignDifficultyInterface.cpp
	
AssignDifficultyToBlaPDB.o: AssignDifficultyToBlaPDB.cpp
	g++ -c AssignDifficultyToBlaPDB.cpp
		
AssignDifficultyToHHR.o: AssignDifficultyToHHR.cpp
	g++ -c AssignDifficultyToHHR.cpp

clean:
	rm *.o assignDifficulty