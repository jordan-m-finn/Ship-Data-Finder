#include "Jordan_Finn_CruiseShip.h"

#include <iostream>

CruiseShip::CruiseShip(const std::string& name, const std::string& year, int maxPassengers) : Ship(name, year), maxPassengers(maxPassengers) {}

int CruiseShip::getMaxPassengers() const { return maxPassengers; }

// Comment 8:
// This function is passed data provided by the application program
// and utilize the 'this' pointer to self assign the value given.
void CruiseShip::setMaxPassengers(int maxPassengers) { this->maxPassengers = maxPassengers; }

// Comment 4:
// This function overrrides the base classe's print function and retrieves additional data
// that was provided in the main application program.
void CruiseShip::print() const
{
	std::cout << "Name: " << getName() << std::endl << "Maximum passengers: " << getMaxPassengers() << std::endl;
}