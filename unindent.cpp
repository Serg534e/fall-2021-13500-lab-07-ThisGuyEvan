/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 07
- Code for both indent removal and character count functions.
*/


#include <cctype>
#include <iostream>

std::string removeLeadingSpaces(std::string line)
{
    std::string cleaned = "";
    do
    {
        if (line[0] != ' ')
        {
            cleaned += line + "\n";
        }
        else
        {
            for (int i = 0; i < line.length(); i++)
            {
                if (!isspace(line[i]))
                {
                    cleaned += line.substr(i) + "\n";
                    break;
                }
            }
        }
    }
    while (getline(std::cin, line));

    return cleaned;
}
