// Logan Wultsch-Fuller
// Multiplication table example
// Last modifed: 2/2/2023

#include <iostream>
using namespace std;

int main (){

  int total;

  for ( int num1 = 0; num1 <=15; num1++){
    cout << endl;
    for (int num2 = 0; num2 <=15; num2++){
      total = num1 * num2 
	if (total < 10) cout << " ";
        if (total < 100) cout << " ";
	cout << total << " " << endl;
    }
  }

  return 0;
}
