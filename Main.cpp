/******************************************************************************
**Write a program that creates a Bus class that includes a bus ID number, 
number of seats, driver ID Number, and current speed. 
(Header File - / Imp File - )

**Create a default constructor without any parameters that initializes 
the value of ID number, number of seats,and driver name.  
(Header File - done / Imp File - done)

**Create another constructor with three parameters of 
bus id number, number of seats, and driver name. 
(Header File - done / Imp File - done )

**Car speed should always be initialized as 0.

**The program will also include the member functions to perform the various 
operations: modify, set, and display bus information 
(Bus id, number of seats, driver name, and current speed).
(Header File - done / Imp File - done )

For example:
- Set the bus id number (Header File - done / Imp File - done)
- Set the number of seats (Header File - done / Imp File - done)
- Set of driver number (Header File - done / Imp File - done )
----------------------------------------------------
Return the bus id number by using get method (Header File - / Imp File - )
- Return the number of seats (Header File - / Imp File - )
- Return of driver number (Header File - / Imp File - )
- Return the current speed (Header File - / Imp File - )
-----------------------
Member function to display the bus information
- busInformation()

Also write two member functions, Accelerate() and Brake(). 
**Whenever Accelerate() is called,increase the speed by 5 (cannot exceed 50), and 
** whenever Brake() is called, decrease the speed by 5 (cannot be negative). 
**Write a program that declares several Bus objects and demonstrates that all the functions work correctly.

*******************************************************************************/

// Header declarations
#include <iostream>
#include "busType.h"

void mainMenuSelection();
void busMenuSelection();

using namespace std;


int main()
{
  	int currentSpeed = 0;
	int busID = 0;
	int driver = 0;
	int seats = 0;  // Max # of seats is set to 33
	int mainSelect = 0;


	busType busOne;

	busType busTwo (2342, 22, 41350);

	busType busThree;
	
	busType busFour;

	busType selectedBus;

	while (mainSelect != 9)
	{
		mainMenuSelection();
		cin >> (mainSelect);
	
	}
	system("PAUSE");
    return 0;
}  // end of Function: main

void mainMenuSelection()
{
    //Function: To display bus menu options for the user
    //Parameters passed: none
    //PostCondition:  No parameters changed 
    //
	cout << "\n\n\n      MENU SELCECTION MENU";
	cout << "\n       Select bus:";
	cout << "\n1. Bus 1";
	cout << "\n2. Bus 2";
	cout << "\n3. Bus 3";
	cout << "\n4. Bus 4";
	cout << "\nEnter 9 to exit ";
	cout << "\nPlease enter your selection: ";

}

void busMenuSelection()
{
    //Function: To display bus menu options for the user
    //Parameters passed: none
    //PostCondition:  No parameters changed 
    //
	cout << "\n\n		Bus Selection Menu";
	cout << "\n1. Increase Speed:";
	cout << "\n2. Decerease Speed: ";
	cout << "\nSet/Change the:";
	cout << "\n3.              Bus ID #:";
	cout << "\n4.              Bus Driver ID: ";
	cout << "\n5.              # of seats on the bus: ";
	cout << "\nEnter 9 to return to the Main Menu";
	cout << "\nPlease enter your selection: ";
}
