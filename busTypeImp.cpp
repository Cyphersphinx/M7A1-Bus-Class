// busTypeImp.cpp the implementation file for busType.h


// Header file Declarations 
#include "busType.h"
#include <iostream>


using namespace std;

void busType::setBusID(int busNum)
{
	//Function to set the bus' ID number
    //The busIDNumber is set according to the parameter
    //PostCondition:  busIDNumber = busNum;
    //                The function checks whether the value of busNum is valid,
    //                the default value of 0 is assigned 
	busIDNumber = busNum;
}

void busType::setNumOfSeats(int seatNum)
{
    //Function to set the number of seats on the bus 
    //The numberOfSeats is set according to the parameter
    //PostCondition:  numberOfSeats = seatNum;
    //                The Max number of seats is to 33 -> if number is higher than 
    //                seat size is set to 33
	
	if ( seatNum  <= 33 )
		numberOfSeats = seatNum;
	else
		numberOfSeats = 33;
}

void busType::setDriverName(int driverNumber)
{
    //Function to set the bus driver's ID number 
    //Parameters passed: The nameOfDriver is set according to the parameter
    //PostCondition:  driverNumber = driverID;
    //                The function checks whether the value of driverIDNum is valid,
    //                the default value of 0 is assigned 
	driverID = driverNumber;
}

int busType::returnBusID() const
{
    //Function: to return the bus ID number 
    //Parameters passed: none
    //PostCondition:  The value of busIDNumber is returned
    //

	return busIDNumber;
}     

int busType::returnNumOfSeats() const
{  
    //Function: to return the number of seats for the bus
    //Parameters passed: none
    //PostCondition:  The value of numberOfSeats is returned
    //

	return numberOfSeats;
}     
      
int busType::returnDriverID() const
{
    //Function: to return the bus driver's ID number
    //Parameters passed: none
    //PostCondition:  The value of driverID is returned
    //

	return driverID;
}
      
int busType::returnCurrentSpeed() const
{
    //Function: to return the current speed of the bus
    //Parameters passed: none
    //PostCondition:  The value of busSpeed is returned
    //

	return busSpeed;
}
      
void busType::Accelerate()
{
	//Function: To increase the speed of the bus by 5(mph) - not to exceed 50 mph
    //Parameters passed: none
    //PostCondition:  busSpeed += 5 unless value goes greater than 50
    //
	if (busSpeed >= 45)
		busSpeed = 50;
	else 		busSpeed -= 5;
}
      
void busType::Brake()
{
    //Function: To decrease the speed of the bus by 5(mph) - not to exceed 0 mph (fully stopped)
    //Parameters passed: none
    //PostCondition:  busSpeed -= 5 unless to go below 0 mph
    //

	if (busSpeed <= 5)
		busSpeed =0;
	else 
		busSpeed -= 5;

}

void busType::busInformation() const
{
	//Function: To display the bus information
    //Parameters passed: none
    //PostCondition:  data for the bus info is displayed 
    //

	cout << "Here is the information for you Bus:";
	cout << "\nBus ID #: " << busIDNumber;
	cout << "\nBus Driver ID #: " << driverID;
	cout << "\nNumber of Seats: " << numberOfSeats;
	cout << "\nBus's Current Speed: " << busSpeed;
	cout << endl;

}

      
busType::busType() 
{
    //Function: To be the 'base' default constructor to initialize all member variables to 0
    //Parameters passed: none
    //PostCondition:  busIDNumber = 0; numberOfSeats = 0; driverID = 0;
    //                busSpeed = 0;

	busSpeed = 0;
	busIDNumber = 0;
	numberOfSeats = 0;
	driverID = 0;
}
      
busType::busType(int busIDNum, int numbOfSeats, int driverIDNum)
{
    //Function: To be the a constructor that initializes member variables to passed in parameters
    //Parameters passed: busIDNumber, numberOfSeats, and driverID are set according to the parameters
    //PostCondition:  busIDNumber = budIDNum; numberOfSeats = numbOfSeats;
    //                driverID = driverIDNum; busSpeed = 0

	busSpeed = 0;
	busIDNumber = busIDNum;
	numberOfSeats = numbOfSeats;
	driverID = driverIDNum;
}
 
