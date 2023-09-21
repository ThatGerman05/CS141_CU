// Program to see how far away lightning is
// Created by: Logan Wultsch-Fuller
// Last Modified: 1/17/2023

#include <iostream>
using namespace std;


const float SPEED_OF_SOUND = 1125; // feet per second
const float FEET_MILE = 5280; // feet in a mile 


int main () {
  float seconds;
  float feet;
  float mile;


  cout << "How many seconds between lightning and thunder? ";

  cin >> seconds;
  feet = seconds * SPEED_OF_SOUND;
  mile = feet / FEET_MILE;
  cout << "About " << feet << " feet away" << " and about " << mile << " miles away" << endl;
  return 0;
}

