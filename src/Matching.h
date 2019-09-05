#ifndef MATCHING_H
#define MATCHING_H

#include "StringCleanup.h"
#include "Chatbot.h"
#include "Database.h"

// copie the content of a string array to a vector
void copy(char const *array[], std::vector<std::string> &v) 
{
	for(int i = 0; i < MAX_RESP; ++i) 
	{
		if(array[i] != NULL) 
		{
			v.push_back(array[i]);
		} 
		else 
		{
			break;
		}
	}
}

//Search the database for a match based on the keyword
std::vector<std::string> findMatch(std::string Input, std::vector<std::string> Responses)
{
	Responses.clear();
	size_t DatabaseSize = sizeof(Database) / sizeof(Database[0]);
	
	//DEBUG
	// for (auto it =  Responses.begin(); it != Responses.end(); ++it) 
    //     std::cout << ' ' << *it << std::endl; 
	// std::cout << Responses.size() <<std::endl;

	for(int i = 0; i < DatabaseSize; ++i) 
	{
		std::string keyWord(Database[i].keyword);
		//Flexible method of searching by keyword
		if( Input.find(keyWord) != std::string::npos ) 
		{
			copy(Database[i].response, Responses);
			return Responses;
			break;
		}
	}
	//Checking if the input could not be found
	if (Responses.size() == 0)
	{
		Responses.push_back("I do not understand what you are saying");
		return Responses;
	}
}

#endif