// Logan Wultsch-Fuller
// Lab 6 - lopp that creates numbers, squares, cubes and square roots
// Due: 2/15/2023

#include <cmath>
#include <iostream>
using namespace std;


int square (int num) {  // function that takes a number and results the square of it
 
  return num*num;
}

int cube (int num) {   // function that takes a number and results in the cube of it
   
  return num*num*num;
}

int main () {

  int j;   // declaring variables to be used as the outputs of the functions
  int k;
  double l;  // double here due to square root function

  for (int i = 0; i <= 20; i++){ // for loop that goes from 0 to 20 for a number assigned in the defining

    j = square(i); // square function squaring i
    k = cube(i); // cube function cubing i
    l = sqrt(i); // built in square root function square rooting i

    cout << i << " " << j << " " << k << " " << l <<  endl; // printing the results
  }

  return 0;
}
