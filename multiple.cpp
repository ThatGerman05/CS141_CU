XC// is the number an exact multiple of 9
// logan wultsch-fuller
// cs 141
// last modifed: 1/26/2023

#include <iostream>
using namespace std;

int main() { 

  int num; 
  cout << "Provide a number";
  cin >> num;

  if (( num % 9) == 0) cout << num << " is a multiple of 9" << endl;
  else  cout << num << " Is not a multiple of 9" <<  endl;
  return 0;
}
