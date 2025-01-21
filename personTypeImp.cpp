//personTypeImp.cpp
    
#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}

void personType::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

void personType::setFirstName(string first)
{
    firstName = first;
}
void personType::setMiddleName(string middle)
{
    middleName = middle;
}
void personType::setLastName(string last)
{
    lastName = last;
}

//Check string equality
bool personType::isLastName(string last) const
{
    if (last == lastName)
        return true;
    return false;
}
bool personType::isFirstName(string first) const
{
    if (first == firstName)
        return true;
    return false;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

string personType::getMiddleName() const
{
    return middleName;
}

    //constructor
personType::personType(string first, string middle, string last) 

{ 
    firstName = first;
    middleName = middle;
    lastName = last;
}

