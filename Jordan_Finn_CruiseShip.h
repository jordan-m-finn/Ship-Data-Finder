#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Jordan_Finn_Ship.h"

class CruiseShip : public Ship
{
private:
	int maxPassengers;

public:
	CruiseShip(const std::string& name, const std::string& year, int maxPassengers); // constructor

	int getMaxPassengers() const;
	
	void setMaxPassengers(int maxPassengers);

	// Comment 3:
	// This is the overriden version of print() instantiated in the base class.
	void print() const override;
};

#endif