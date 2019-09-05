#ifndef STRINGCLEANUP_H
#define STRINGCLEANUP_H

#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

//maximum number of responses for user input
const int MAX_RESP = 4;

//Cleanup the punctuation from the string
std::string cleanPunctuation(std::string str);

//Convert the text to lower case
std::string lowerCase( std::string str );

#endif