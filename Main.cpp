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
void busMenuSelection(busType& busTemp);

using namespace std;


int main()
{
	int mainSelect = 0;

	busType busOne (1551, 30, 43241);
	busType busTwo (2342, 22, 41350);
	busType busThree (2324, 15, 21341);
	busType busFour (23423, 14, 13414);
    // busType selectedBus;

	while (mainSelect != 9)
	{
		mainMenuSelection();
		cin >> (mainSelect);
		switch (mainSelect)
		{
		    case 1:
		      busMenuSelection(busOne);
		      break;
		    case 2:
		      busMenuSelection(busTwo);
		      break;
		    case 3:
		      busMenuSelection(busThree);
		      break;
		    case 4:
		      busMenuSelection(busFour);
		      break;
		    case 9:
		      cout << "Good Bye!!";
		      break;
		    default:
		      cout << "You have made an improper request. Please try again\n\n\n\n";
		}
	
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

}  // end of mainMenuSelection

void busMenuSelection(busType& busTemp)
{
    //Function: To display bus menu options for the user
    //Parameters passed: # of Bus selected
    //PostCondition:  No parameters changed 
    //
    int menuSelect = -1;
    int currentSpeed = 0;
	int busID = 0;
	int driver = 0;
	int seats = 0;  // Max # of seats is set to 33
    
    
	while (menuSelect != 0)  
	{
	    cout << "\n\n		Bus Settings Selection Menu";
    	cout << "\n1. Increase Speed by 5 mph:";
	    cout << "\n2. Decerease Speed by 5 mph: ";
	    cout << "\n  Set/Change the:";
	    cout << "\n3.              -Bus ID #:";
	    cout << "\n4.              -Bus Driver ID: ";
	    cout << "\n5.              -# of occupied seats on the bus: ";
	    cout << "\n6. Show Bus ID #:";
	    cout << "\n7. Show Bus Driver ID #:";
	    cout << "\n8. Show # of occupied seats on the bus:";
	    cout << "\n9. Show Bus current speed:";
	    cout << "\nEnter 0 to return to the Main Menu";
	    cout << "\nPlease enter your selection: ";
	    cin >> menuSelect;
	    switch (menuSelect)
	    {
	        case 1:  // Increase Speed
	          cout << "\nBus speed has been set to:";
	          busTemp.Accelerate();
	          currentSpeed = busTemp.getCurrentSpeed();
	          cout << currentSpeed << endl << endl;
	          break;
	        case 2:  // Decrease Speed
	          cout << "\nBus speed has been set to:";
	          busTemp.Brake();
	          currentSpeed = busTemp.getCurrentSpeed();
	          cout << currentSpeed << endl << endl;
	          break;
	        case 3:  // Change Bus ID #
	          cout << "\nThe current ID for this bus is: " << busTemp.getBusID();
	          cout << "\nWhat is the new ID # for this bus:";
	          cin >> busID;
	          busTemp.setBusID(busID);
	          cout << endl << endl;
	          break;
	        case 4:  // Change Bus Driver ID #
	          cout << "\nThe current Bus Driver ID # for this bus is: " << busTemp.getDriverID();
	          cout << "\nWhat is the new Driver ID # for this bus:";
	          cin >> driver;
	          busTemp.setDriverID(driver);
	          cout << endl << endl;
	          break;
	        case 5:  // Change # occupied seats on bus
	          cout << "\nPlease enter the new number of seats occupied: ";
	          cin >> seats;
	          busTemp.setNumOfSeats(seats);
	          cout << endl << endl;
	          break;
	        case 6:  // Show bus ID # 
	          cout << "\nThe current ID # for this Bus is: "; 
	          busID = busTemp.getBusID();
	          cout << busID <<  endl << endl;
	          break;
	        case 7:  // Display Bus Driver ID # 
	          cout << "\nThe current Driver ID # for this Bus is: "; 
	          driver = busTemp.getDriverID();
	          cout << driver << endl << endl;
	          break;
	        case 8:  // Display # occupied seats on bus
	          cout << "\nThe current # of occupied seats for this Bus is: "; 
	          seats = busTemp.getNumOfSeats();
	          cout << seats << endl << endl;
	          break;
	        case 9:  // Display Bus's current speed
	          cout << "\nThe current speed for this Bus is: "; 
	          currentSpeed = busTemp.getCurrentSpeed();
	          cout << currentSpeed << endl << endl;
	          break;
	        case 0:  //Used to exit Bus Selection Menu
	          break;
	        default:
	          cout << "\nYou have entered an incorrect value.  Please try again\n";
	        
	    } // end of switch: menuSelect
	} // end of while: menuSelect
}  // end of function: busMenuSelection
