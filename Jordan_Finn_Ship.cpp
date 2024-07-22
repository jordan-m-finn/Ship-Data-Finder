#include "Jordan_Finn_Ship.h"

#include <iostream>

Ship::Ship(const std::string& name, const std::string& year) : name(name), year(year) {}

// Comment 10:
// These functions return the name and year values.
std::string Ship::getName() const { return name; }
std::string Ship::getYear() const { return year; }

// Comment 7:
// These functions are passed data provided by the application program
// and utilize the 'this' pointer to self assign the values given.
void Ship::setName(const std::string& name) { this->name = name; }
void Ship::setYear(const std::string& year) { this->year = year; }

// Comment 2:
// This virtual function is used to call other member functions that will display information 
// declared in the main application program.
void Ship::print() const
{
	std::cout << "Name: " << getName() << std::endl << "Year built: " << getYear() << std::endl;
}