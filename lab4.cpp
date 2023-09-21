//Logan Wultsch-Fuller
// Lab 4 - Looping celsius and fahrenheit conversion
// Due 2/3/2023 

#include <iostream> 
using namespace std;

int main (){

  int fahrenheit; // stating the two variables to be used for the calculation
  int celsius;

  celsius = 100; // setting celsius to 100 degrees

  fahrenheit = ( 9 * celsius) / 5 +32; // calculating fahrenheit

  cout <<"Celsuis: " <<  celsius << " Fahrenheit:  " <<  fahrenheit << endl;

 // printing celsius and fahrenheit to make sure the math is correct
 
  do { // do while loop to decrement celsius and calculate fahrenhet until they are equal
    celsius = celsius - 1;
    fahrenheit = ( 9 * celsius) / 5 +32;

  }while (celsius != fahrenheit); // logic check to see if fahrenheit and celsius are equal, when they are, stop it stops the loop

  cout << "When Celsius = " << celsius << ", fahrenheit is also = " << fahrenheit << endl;

  // printing when celsius and fahrenheit are equal

  return 0;
}

//Answers to questions//

// Question 1: The condition that will end the loop is [while(celsius != fahrenheit)] which states that when celsius is not equal to fahrenheit calculation, the two values will be the same

// Question 2: You should check the condition at the beginning fo the loop so you dont run the calcualtion again by accident and get the wrong value, you can run it at the end though but there is more of a chance of creating a bug that way

// Question 3: The kind of loop that is best for the condition checking like stated in question 2 is a for loop due to its nature of checking conditions right at the beginning before even entering the loop.  
