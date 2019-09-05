#include "StringCleanup.h"

#include <iostream>

// removing punctuation and spaces from input string
std::string cleanPunctuation(std::string str) 
{
	for (int i = 0, len = str.size(); i < len; i++) 
	{ 
		// check whether parsing character is punctuation or not 
		if (ispunct(str[i])) 
		{ 
			str.erase(i--, 1); 
			len = str.size(); 
		} 
	} 
	return str;
}

// convert a string to lowercase
std::string lowerCase( std::string str ) 
{
	std::transform(str.begin(), str.end(), str.begin(),
		[](unsigned char c){ return std::tolower(c); });
	return str;
}

