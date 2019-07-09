// TestApplicationCplusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// this adds the class (this is without constructor and deconstructor example)
class Car
{
public:
	// Constructor (creates the object does not return nothing)
	Car();
	// sends to main
	int getMph();
	// retrives from main (must add datatype and variable from private or it can be public variable)
	void setMph(int mph);
	// sends to main
	void gas();
	// sends to main
	void brake();
	// Destructor (deletes from memory)
	~Car();
	
	

private:

	// this makes the variable private (no other class can access this)
	int mph;

};


// this returns the value to main
int Car::getMph()
{
	return mph;
}

// this collects the value from main (create new variable to accept new values)
void Car::setMph(int newMilesPerHour)
{
	if (newMilesPerHour >= 0)
	{
		mph = newMilesPerHour;
	}
}

// this method adds the speed by one
void Car::gas()
{
	setMph(mph + 1);
	cout << "Your Speed Is: " << mph << "MPH" << endl;

}

// this method reduces the speed by one
void Car::brake()
{
	setMph(mph - 1);
	cout << "Your Speed Is: " << mph << "MPH" << endl;
}

Car::Car()
{
	
	
	cout << "The Car Object Is Created!" << endl;
}

Car::~Car()
{
	cout << "The Object's Are Deleted From Memory!" << endl;
}


int main()
{
	// all objects must excute by order of operation I want the program to do


	cout << "Buick Car Speed " << endl;
   // this calls the class
	Car Buick;
	// this sets the default mph at zero
	Buick.setMph(0);
	// this sets the mph at one
	Buick.gas();
	// this sets the mph at two
	Buick.gas();
	// this sets the mph at three
	Buick.gas();
	// this sets the mph at two
	Buick.brake();
	// this sets the mph at one
	Buick.brake();
	// this sets the mph at zero
	Buick.brake();
	// this adds space
	cout << endl;


	// this calls the class (Different Car, Same Class)
	cout << "Ford Car Speed " << endl;
	Car Ford;
	// this sets the default mph at zero
	Ford.setMph(0);
	// this sets the mph at one
	Ford.gas();
	// this sets the mph at two
	Ford.gas();
	// this sets the mph at three
	Ford.gas();
	// this sets the mph at two
	Ford.brake();
	// this sets the mph at one
	Ford.brake();
	// this sets the mph at zero
	Ford.brake();
	// this adds space
	cout << endl;

	// this calls the class (Different Car, Same Class)
	cout << "Chevy Car Speed " << endl;
	Car Chevy;
	// this sets the default mph at zero
	Chevy.setMph(0);
	// this sets the mph at one
	Chevy.gas();
	// this sets the mph at two
	Chevy.gas();
	// this sets the mph at three
	Chevy.gas();
	// this sets the mph at four
	Chevy.gas();
	// this sets the mph at three
	Chevy.brake();
	// this sets the mph at two
	Chevy.brake();
	// this sets the mph at one
	Chevy.brake();
	// this sets the mph at zero
	Chevy.brake();
	// this adds space
	cout << endl;

	// must add this to end the program after it runs through every statement in order!
	return 0;
}





