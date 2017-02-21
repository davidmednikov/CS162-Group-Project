/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: tool.cpp is the Tool class implementation file.
 *********************************************************************/
#include "tool.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
Tool::Tool(){}

/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
Tool::~Tool(){}

/*********************************************************************
 ** Description: retrieve Tool type
 ** Returns: char
 *********************************************************************/
char Tool::getType()
{
    return type;
}

/*********************************************************************
 ** Description: retrieve strength value
 ** Returns: int
 *********************************************************************/
int Tool::getStrength()
{
    return strength;
}

/*********************************************************************
 ** Description: retrieve strength value
 ** Returns: int
 *********************************************************************/
int Tool::setStrength(int str)
{
    strength = str;
}


