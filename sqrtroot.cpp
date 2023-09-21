// Logan Wultscl-Fuller
// Square root approx program
// Last modified: 2/2/2023

#include <iostream>
using namespace std;

int main () { 
  double n, guess, r;
  double last;

  cout << "Enter a number ";
  cin >> n;

  guess = n / 2.0;


  //  for (int i = 0; i < 100; i++) {
  do {   
 
    last = guess;
    r = n / guess;
    guess = (guess + r) / 2.0;

  }while ((guess-last) > (guess * 0.01) || (guess - last) < (guess * -0.01));

  cout << "Approximate sqrt of " << n << " is " << guess << endl;

  return 0;
}
