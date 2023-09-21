// Logan Wultsch-Fuller
// Homework 1
// Last Modified: 1/26/2023
// Due: 2/1/2023

// This program is designed to take the input from the store manager about a product and organize it accordingly

#include <iostream>

using namespace std; 

int main() {


  int store;   // variable for number of items on the shelf in the store
  int stockroom;  // variable for number of items in the stockroom of the store
  int warehouse;  // variable for the number of items in the warehouse of the store
  int total;   // variable for the total number of items owned by the store

  string item;  // string variable for the name of the product 

  cout << ":Item Input:\n" << "Please enter the product name: ";
  cin >> item; // input for product name
  cout << "Please enter the number of items on the shelf: "; 
  cin >> store; // input for number of items on the shelf
  cout << "Please enter the number of items in the stockroom: ";
  cin >> stockroom; // input for number of items in the stockroom
  cout << "Please enter the number of items in the warehouse: ";
  cin >> warehouse; // input for number of items in the warehouse

  total = store + stockroom + warehouse; //math to calculate total number of items of product

  cout << item << " " << store << " " << stockroom << " " <<  warehouse << " " << total << endl;


  return 0;
}
