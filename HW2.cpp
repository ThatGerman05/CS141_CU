// Logan Wultsch-Fuller
// Homework 2 - Inventory system with loops, if statements and totals

#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int store; // variable used for number of items in the store 
  int stockroom; // variable used for number of items in the stockroom
  int wharehouse; // variable used for number of items in the wharehouse
  int total; // variable used for combined total of items in the store, stockroom and wharehouse
  int target; // variable used for the target total number of one item in the store
  int full_total; // variable used for the conbined total of all the items of all different listed kinds 
  int stuff; // variable used to state the number of different items being listed/recorded

  string item; // variable used to input the name of the item in the store

  cout << "Welcome to Wltsch-Fuller Grocery. How many items do you have? ";
  cin >> stuff;


  for (int i = stuff; i > 0; i--) {       // for loop used to record the items listed based in a decrement of the number that is the different number of items
     
    cout << "Name of item: ";
    cin >> item;
    cout << "Enter the number of items on the shelf ";
    cin >> store;
    cout << "Enter the number of items in the stockroom ";
    cin >> stockroom;
    cout << "Enter the number of items in the wharehouse ";
    cin >> wharehouse;     // this section is used to intake the number of items in the store, stockroomm and wharehouse

    total = store + stockroom + wharehouse; // calculation to figure out the total number of one item

    cout << "What is the target number of items? ";
    cin >> target; // input for the target number of that one item

    if (total < target) {
      cout << item << " " << store << " " << stockroom << " " << wharehouse << " " << total << " under by " << abs(total - target) <<  endl;
    }
    else if (total > target) {
      cout << item << " " << store << " " << stockroom << " " << wharehouse << " " << total << " over by " << total - target << endl;
    }
    else if (total = target) {
      cout << item << " " << store << " " << stockroom << " " << wharehouse << " " << total << " at exact amount " << endl;
    }
    else cout << "test failed"; // if statements to make the comparison if the total number of one item is at, above or below the target number
    // this last else statement exists incase the user inputs the incorrect input
    full_total = full_total + total; // running total of the number of all the items of all different types

  }

  cout <<"Total number of items: " << full_total << endl;

  return 0;
}
