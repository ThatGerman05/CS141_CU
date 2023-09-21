//Logan Wultsch-Fuller
//Last Modified: 1/25/2023
// Program used to understand sine, cosine, and tangent //

#include <cmath>
#include <iostream>
using namespace std;

int main(){

  float num_frac; //variable for the numerator of a fraction
  float den_frac; //variable for the denominator of a fraction
  float frac; //variable for fraction // numerator/denominator
  float pi_times_fraction; //variable for the decimal representation of the fraction multiplied by pi

  cout << " Enter the numerator of the fratcion ";
  cin >> num_frac;

  cout<< " Enter the denominator of the fraction ";
  cin >> den_frac;

  frac = num_frac / den_frac; 
  pi_times_fraction = frac * M_PI;
  sin(M_PI);


  cout << " Fraction entered " << frac << " Pi multiplied by fraction " << pi_times_fraction << " pi " << M_PI << endl;


  return 0; 
  }
