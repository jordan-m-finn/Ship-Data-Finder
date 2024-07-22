#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship
{
private:
	std::string name;
	std::string year;

public:
	Ship(const std::string& name, const std::string& year); // constructor
	
	std::string getName() const; 
	std::string getYear() const;

	void setName(const std::string& name);
	void setYear(const std::string& year);

	// Comment 1:
	// This function is declared virtual to be later overriden in it's derived classes.
	virtual void print() const;
};

#endif