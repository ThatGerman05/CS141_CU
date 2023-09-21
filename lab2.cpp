// Lab 2 Division of intergers
// Created by: Logan Wultsch-Fuller
// Last Mdofifed: 1/20/2023

#include <iostream>
using namespace std;

int main () {
  int numerator; //decalring the numerator variable
  int denominator; //declaring the denominator variable
  int quotient; //declaring the quotient variable
  int remainder ; //declaring the remainder variable 
  cout << "Division of two intergers" << endl;    //printing the request for the user
  cout << "Please enter the numerator ";    //the user enters an interger for the numerator 
  cin >> numerator;
  cout << "Please enter the denominator ";    //the user enters a interger for the denominator
  cin >> denominator;
  quotient = numerator/denominator;     //basic divison and modulo used to calculate the quoteint and remainder
  remainder = numerator%denominator;

  cout << "Quotient " << quotient << " and remainder " << remainder << endl; // printing the result

  // Sanity Check
  cout << "Sanity check" << endl;
  cout << denominator << " (denominator) * " << quotient << " (quotient) + " << remainder << " (remainder) = " << numerator  << " (numerator) " << endl; //printing the mathmatical check to make sure the calculated numbers work

  numerator = denominator*quotient+remainder; // actual math to check if the math works out

  return 0;
}
