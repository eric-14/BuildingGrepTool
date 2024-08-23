#pragma once 


#ifndef MATCHING_OPTIONS_H
#define MATCHING_OPTIONS_H


#include <map>
#include <string>
#include <stdexcept>
#include <iostream> 


class matchingOptions
{
private:
    //supported options in grep 
    //map stores the options parameter and a function pointer to implement the function call 
   std::map<std::string, bool (*)(const std::string &inputline, const std::string &pattern)> matchController;

public:
    //function to match digit 

    int digitMatcher(const std::string &line, const std::string &pattern);


    matchingOptions(/* args */);

    ~matchingOptions();
};


#endif
