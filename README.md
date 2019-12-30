# Chatter

The capstone project that I developed is a basic chatbot application. The chatbot has different phrases that it can respond to as well as change up its vocabulary and understand repetition. Please run the program, type your question and see what the chatbot has to say! 

The main files include
* Chatbot.cpp - implementation of input grabbing from user and response to user methods
* Chatbot.h - structure of input grabbing from user and response to user
* Database.h - a complete list of all of the input and output phrases fed into the chatbot
* main.cpp - the runtime looop
* Matching.h - the algorithms used to search the database for a match based on keyword
* StringCleanup.cpp - removing punctuation, spaces, and capitalization from input string
* StringCleanup.h - structure of punctuation methods

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./Chatbot`.
