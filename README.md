# CPPND: Capstone Chatbot

The capstone project that I developed is a basic chatbot application. The chatbot has different phrases that it can respond to as well as change up its vocabulary and understand repetition. Please run the program, type your question and see what the chatbot has to say! 

The main files include
* Chatbot.cpp - implementation of input grabbing from user and response to user methods
* Chatbot.h - structure of input grabbing from user and response to user
* Database.h - a complete list of all of the input and output phrases fed into the chatbot
* main.cpp - the runtime looop
* Matching.h - the algorithms used to search the database for a match based on keyword
* StringCleanup.cpp - removing punctuation, spaces, and capitalization from input string
* StringCleanup.h - structure of punctuation methods

## Rubric

The following rubric points are met in this project with the bullet points describing the justification:
1. The project demonstrates an understanding of C++ functions and control structures.
    * A variety of control structures are used in the project such as structures and classes
    * The project code is clearly organized into functions.
2. The project accepts user input and processes the input.
    * User input is necessary for the chatbot to function
3. The project uses Object Oriented Programming techniques.
    * Chatbot is a class that has different attributes that hold data
4. Classes use appropriate access specifiers for class members.
    * All class data members are explicitly specified as public, protected, or private.
5. Class constructors utilize member initialization lists.
    * Chatbot constructor utilizes a member initialization list
6. Classes abstract implementation details from their interfaces.
    * All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
7. Classes encapsulate behavior.
    * Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.
8. Classes follow an appropriate inheritance hierarchy.
    * Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.
9. Templates generalize functions in the project.
    * Shuffle is used as a template function in this project

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