#include "Chatbot.h"

int main()
{
	std::cout << "Chatbot application is active\nPlease type your question to interact with the chatbot\nType exit to quit\n" << std::endl;

	try 
	{
		Chatbot JakeBot;

		while(!JakeBot.quit()) 
		{
			JakeBot.get_input();
			JakeBot.respond();
		}
	}
	catch(...)
	{
		std::cerr << "An unknown error has occured" << std::endl;
	}
	return 0;
}

