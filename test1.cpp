// Test Program 1
// Program that calculates the sum and the product of two intergers
// Beware: user must give only integers, no other types of numbers
// Created by: Logan Wultsch-Fuller
// Last Modified: 1/17/2023


#include <iostream>
using namespace std;

int main () {
  int num1, num2; //two integer numbers
  int sum, product;
  

  cout << " Enter two intergers ";
  cin >> num1 >> num2;

  sum = num1 + num2;
  product = num1 * num2;

  cout << "Sum: " << sum << " and Product: " << product << endl;


  return 0;
}
