//Logan Wultsch-Fuller
//Lab 5 - toll using switches
//Due 2/10/2023

#include <iostream>
using namespace std;

int main() {

  int weight; // declaring variables to be used in the switch statement and the if statements
  int class_num;

  cout << "Please state your vehicle's weight: ";
  cin >> weight; // taking in the input for the vehicles weight

  if ((weight<=7000) &&  (weight>0)) class_num = 1; // using if statements to calcualte what class the vehicle falls
  else if ((weight>=7001) && (weight<=15000)) class_num = 2; // into
  else if ((weight>=15001) && (weight<=19000)) class_num = 3;
  else if ((weight>=19001) && (weight<=30000)) class_num = 4; // finalls assigning a number to a class variable to
  else if (weight>30001) class_num = 5; // state what class th vehicle is in
  else cout << "weight cannot be negative, please try again"; // safety check for negaitve vehicle weights

  switch (class_num){ // switch statement outputs the class of the vehicle and how much is due for the toll
  case 1: cout << "You are a class 1 vehicle. total due 4$";
    break;
  case 2: cout << "You are a class 2 vehicle. total due 6$";
    break;
  case 3: cout << "You are a class 3 vehicle. total due 10$";
    break;
  case 4: cout << "You are a class 4 vehicle. total due 20$";
    break;
  case 5: cout << "You are a class 5 vehicle. total due 40$";
  default: ;
  }

  cout << endl;

  return 0;
}
