//busClass.h, the specification file for the class busType.

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
      
      void setDriverName(string driveName);
      //Function to set the bus driver's name 
      //The nameOfDriver is set according to the parameter
      //PostCondition:  nameOfDriver = driveName;
      //                The function checks whether the value of driveName is valid,
      //                the default value of 'John Doe' is assigned 
      
      
      
      
      
      busType();
      //Default constructor
      //ID number is set to 0.
      //Number of seats is set to 0.
      //Driver name is set to "John Doe"
      
      busType(int busIDnum, int numbOfSeats, string driveName);
      //Constructor with three parameters
      //Sets the Bus ID #, # of Seats, and Driver Name to incoming parameters
      //PostCondition: 
      
          
    
    private:
      int busIDNumber;  // variable to store the bus ID number
      int numberOfSeats;  // variable to store number of seats 
      string nameOfDriver;  // variable to store the name of the bus driver
      int busSpeed;  // variable to store speed of the bus
};
