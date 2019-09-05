#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "Chatbot.h"
#include "Database.h"
#include "Matching.h"

void Chatbot::get_input() 
{
	//UI
	std::cout << ">";

	//Saving the previous input for repetition checking
	_prevInput = _userInput;

	//Getting the user input until the enter key is pressed
	std::getline(std::cin, _userInput);
	
	//Runs the prepocess suite of commands
	_userInput = cleanPunctuation(_userInput);
	_modifiedInput = lowerCase(_userInput);
}

void Chatbot::respond() 
{
	//Handle the case of null input 
	if(_modifiedInput.length() == 0 && _prevInput.length() != 0)
	{
		_modifiedInput = "NULL INPUT**";
	}
	//Handle the case of repetetive null input
	else if(_modifiedInput.length() == 0 && _prevInput.length() == 0)
	{
		_modifiedInput = "NULL INPUT2**";
	}
	//Repetetive input
	else if(_prevInput.length() > 0 &&
			((_modifiedInput == _prevInput) || 
			(_modifiedInput.find(_prevInput) != std::string::npos) ||
			(_prevInput.find(_modifiedInput) != std::string::npos)))
	{
		_modifiedInput = "REPETITION**";
	}

	//Find a the proper match
	responseList = findMatch(_modifiedInput, responseList);

    //Handling the results found from the database or lack thereof

	//check if the user wants to exit the program
    if(_modifiedInput.find("exit") != std::string::npos)
	{
		_quitProgram = 1;
	}

	//Choosing the appropriate response
	if(responseList.size() > 0) 
	{
		//Shuffling the responses to select a unique response
		for(int i = 0; i < responseList.size(); ++i) 
		{
			int index = rand() % responseList.size();
			std::swap(responseList[i], responseList[index]);
		}
		//Choosing the response
		_Response = responseList[0];

		//Printing out the response
		if(_Response.length() > 0) {
			std::cout << _Response << std::endl;
		}
	}
}