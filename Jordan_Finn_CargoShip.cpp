#include "Jordan_Finn_CargoShip.h"

#include <iostream>

CargoShip::CargoShip(const std::string& name, const std::string& year, int cargoCapacity) : Ship(name, year), cargoCapacity(cargoCapacity) {}

int CargoShip::getCargoCapacity() const { return cargoCapacity; }

// Comment 9:
// This function is passed data provided by the application program
// and utilize the 'this' pointer to self assign the value given.
void CargoShip::setCargoCapacity(int cargoCapacity) { this->cargoCapacity = cargoCapacity; }

// Comment 6:
// This function overrrides the base classe's print function and retrieves additional data
// that was provided in the main application program.
void CargoShip::print() const
{
	std::cout << "Name: " << getName() << std::endl << "Cargo capacity: " << getCargoCapacity() << " tons" << std::endl;
}