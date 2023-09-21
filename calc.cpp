// calculator program - 4 function
// logan wultsch-fuller
// cs 141

#include <iostream>
using namespace std;

int main () {

  int num1, num2;
  int result; 
  char op;


  cout << "Enter number, operator, number where operators are +-*/ ";
  cin >> num1 >> op >> num2;
  if (op == '+') result = num1 + num2;
  else if (op == '-') result = num1 - num2;
  else if (op == '*') result = num1 * num2;
  else if (op == '/') {
    if (num2 == 0) {
      cout << "Do not try to divide by zero" << endl;
      return 1;
    }
  result = num1 / num2;
  }
  else { 
    cout << op << " is not a legal operatro - try again" << endl;
    return 1;
  }
  cout << num1 << " " << op << " " << num2 << " = " << result << endl;

  return 0; 
}
