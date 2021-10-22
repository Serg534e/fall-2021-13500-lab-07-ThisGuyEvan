/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 07

    - Test cases for task A and B, unindenting and indenting.
*/


#include <iostream>
#include <fstream>
#include "indent.h"


int main()
{

    std::ifstream file("bad-code.cpp");
    if (file.fail())
    {
        std::cerr << "File open error.";
        exit(1);
    }
    std::string s;


    //TEST CASE #1: bad-code.cpp
    std::cout << "\n\nTEST CASE 1: bad-code.cpp";

    std::cout << "\nFile: \"bad-code.cpp\" - [Unedited]:\n\n";
    while (getline(file, s))
    {
        std::cout << s << "\n";
    }
    file.close();


    file.open("bad-code.cpp");
    std::cout << "\n\n[Unindenting]:\n\n";
    while (getline(file, s))
    {
        std::cout << unIndent(s);
    }
    file.close();


    file.open("bad-code.cpp");
    std::cout << "\n\n[Re-Indented]:\n";
    if (file.is_open())
    {
        std::cin.rdbuf(file.rdbuf());
    }
    std::cout << reIndent(s);
    file.close();


    //TEST CASE #2: horrible-code.cpp
    std::cout << "\n\nTEST CASE 2: horrible-code.cpp";
    std::cout << "\nFile: \"horrible-code.cpp\" - [Unedited]:\n\n";
    while (getline(file, s))
    {
        std::cout << s << "\n";
    }
    file.close();


    file.open("horrible-code.cpp");
    std::cout << "\n\n[Unindenting]:\n\n";
    while (getline(file, s))
    {
        std::cout << unIndent(s);
    }
    file.close();


    file.open("horrible-code.cpp");
    std::cout << "\n\n[Re-Indented]:\n";
    if (file.is_open())
    {
        std::cin.rdbuf(file.rdbuf());
    }
    std::cout << reIndent(s);
    file.close();


    return 0;
}
