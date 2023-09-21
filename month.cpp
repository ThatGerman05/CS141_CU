// convert numerical values of months into strings
// class, spring 23

#include <iostream>
using namespace std;

int main () {
  int num;
  cout << "Month number: ";
  cin >> num;

  switch (num) {
  case 1: cout << "January";
    break;
  case 2: cout << "February";
    break;
  default: cout << "Got tired of typing";
  }
  cout << endl;
  return 0;
}
