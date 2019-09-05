#ifndef CHATBOT_H
#define CHATBOT_H

#include <iostream>
#include <ctime>

#include "StringCleanup.h"

class Chatbot {
	
public:
	//Constructor with lambda function to initiate the chatbot object and
	//set the seed for the random number generator
	Chatbot() : _userInput("null"), _quitProgram(0) {srand(time(NULL));}
	//Destructor
	~Chatbot() {};

	//Typical behaviour functions
	void get_input();
	void respond();
	bool quit() const {return _quitProgram;}
	
protected:
	std::vector<std::string> responseList;
	std::string	_userInput;

private:
	std::string	_Response;
	std::string	_prevInput;
	bool _quitProgram;
	std::string _modifiedInput;
};

#endif
