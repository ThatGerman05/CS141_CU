// calcualte interest
// Created by: Logan Wultsch-Fuller
// Last Modifed: 1/19/2023

#include <iostream>
using namespace std;

int main () {

  double balance;
  double rate;
  double interest;
  string prompt;
  prompt = "Please enter the";

  string p2 = "Starting balance ";
  string p3 = "Interest rate";


  cout << "Starting balance ";
  cin >> balance;
  cout << "Rate in percent ";
  cin >> rate;

  // convert from percent
  // rate = rate / 100.0;
  rate /= 100.0;  // same as aritmetic before


  interest = balance * rate;
  //  balance = balance + interest;
  balance += interest; // same as aritmetic before

  cout << "New balance " << balance << endl;

  return 0;

}
