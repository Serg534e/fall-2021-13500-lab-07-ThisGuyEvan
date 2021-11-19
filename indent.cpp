/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 07

    - Functions for task A and B, unindenting and indenting.
*/

#include <iostream>
#include "indent.h"

std::string unIndent(std::string s)
{
   std::string cleaned = "";
   if (s[0] != ' ')
   {
      return s + "\n";
   }
   else
   {
      for (int i = 0; i < s.length(); i++)
      {
         if (!isspace(s[i]))
         {
            cleaned += s.substr(i) + "\n";
            break;
         }
      }
   }
   return cleaned;
}

// Checks the lines for open/closed brackets to either add or subtract the number of tabs respectively.
std::string reIndent(std::string line)
{
   std::string indented = "";
   int cnt = 0;

   do
   {
      bool block = false;
      line = unIndent(line);

      if (line.find('{') != std::string::npos)
      {
         cnt++;
         block = true;
      }
      if (line.find('}') != std::string::npos)
      {
         cnt--;
      }


      std::string tmp = "";
      for (int tabs = 0; tabs < cnt; tabs++)
      {
         tmp += "\t";
      }

      indented += block ? tmp.erase(tmp.length() - 1) + line : tmp + line;
   }
   while (getline(std::cin, line));

   return indented;
}
