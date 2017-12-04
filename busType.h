//#pragma once
class busType
{
public:
	void setBusID(int busNum); 
      //Function to set the bus' ID number
      //The busIDNumber is set according to the parameter
      //PostCondition:  busIDNumber = busNum;
      //                The function checks whether the value of busNum is valid,
      //                the default value of 0 is assigned 
      
    void setNumOfSeats(int seatNum);
      //Function to set the number of seats on the bus 
      //The numberOfSeats is set according to the parameter
      //PostCondition:  numberOfSeats = seatNum;
      //                The function checks whether the value of seatNum is valid,
      //                the default value of 0 is assigned 
      
      void setDriverName(int driverNumber);
      //Function to set the bus driver's ID number 
      //Parameters passed: The nameOfDriver is set according to the parameter
      //PostCondition:  driverNumber = driverID;
      //                The function checks whether the value of driverIDNum is valid,
      //                the default value of 0 is assigned 
      
      int returnBusID() const;
      //Function: to return the bus ID number 
      //Parameters passed: none
      //PostCondition:  The value of busIDNumber is returned
      //
      
      int returnNumOfSeats() const;
      //Function: to return the number of seats for the bus
      //Parameters passed: none
      //PostCondition:  The value of numberOfSeats is returned
      //
      
      int returnDriverID() const;
      //Function: to return the bus driver's ID number
      //Parameters passed: none
      //PostCondition:  The value of driverID is returned
      //
      
      int returnCurrentSpeed() const;
      //Function: to return the current speed of the bus
      //Parameters passed: none
      //PostCondition:  The value of busSpeed is returned
      //
      
      void Accelerate();
      //Function: To increase the speed of the bus by 5(mph) - not to exceed 50 mph
      //Parameters passed: none
      //PostCondition:  busSpeed += 5 unless value goes greater than 50
      //
      
      void Brake();
      //Function: To decrease the speed of the bus by 5(mph) - not to exceed 0 mph (fully stopped)
      //Parameters passed: none
      //PostCondition:  busSpeed -= 5 unless to go below 0 mph
      //

	  void busInformation() const;
      //Function: To display the bus information
      //Parameters passed: none
      //PostCondition:  data for the bus info is displayed 
      //

      busType();
      //Function: To be the 'base' default constructor to initialize all member variables to 0
      //Parameters passed: none
      //PostCondition:  busIDNumber = 0; numberOfSeats = 0; driverID = 0;
      //                busSpeed = 0;
      
      busType(int busIDNum, int numbOfSeats, int driverIDNum);
      //Function: To be the a constructor that initializes member variables to passed in parameters
      //Parameters passed: busIDNumber, numberOfSeats, and driverID are set according to the parameters
      //PostCondition:  busIDNumber = budIDNum; numberOfSeats = numbOfSeats;
      //                driverID = driverIDNum; busSpeed = 0
      
          
    
    private:
      int busIDNumber;  // variable to store the bus ID number
      int numberOfSeats;  // variable to store number of seats 
      int driverID;  // variable to store the bus driver's ID number
      int busSpeed;  // variable to store speed of the bus
};
