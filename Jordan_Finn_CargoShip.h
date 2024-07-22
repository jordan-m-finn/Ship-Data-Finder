#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Jordan_Finn_Ship.h"

class CargoShip : public Ship
{
private:
	int cargoCapacity;

public:
	CargoShip(const std::string& name, const std::string& year, int cargoCapacity); // constructor

	int getCargoCapacity() const;

	void setCargoCapacity(int cargoCapacity);

	// Comment 5:
	// This is the overriden version of print() instantiated in the base class.
	void print() const override;
};

#endif