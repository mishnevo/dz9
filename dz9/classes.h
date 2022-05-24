#pragma once

#include <iostream>

using namespace std;

class Property {

protected:

double worth;

public:

	Property(double worth = 0) {
		this->worth = worth;
	}
	virtual double Tax() = 0;
	virtual void get_worth() {

		cout << worth << endl; 
	}
};

class Apartament : public Property {

public:
	
	Apartament(double worth = 0) :Property(worth) {

	}
	double Tax() override;
};


class Car : public Property {

public:

	Car(double worth = 0) : Property(worth) {

	}
	double Tax() override;
};

class CountryHouse : public Property {

public:

	CountryHouse(double worth = 0) : Property(worth) {

	}
	double Tax() override;
};

