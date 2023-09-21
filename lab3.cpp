// Lab 3 ATM Machine
// Created by: Logan Wultsch-Fuller
// Last Modifed: 1/27/2023

#include <iostream>
using namespace std; 

int main () {

  char op; //request character to be made by the atm user
  float money; //balance that the atm user has
  float input; //amout of money that the atm user is inputing or removing

  money = 1000; // starting balance

  cout << ":ATM MACHINE:\n" << "Select and Option" << endl; // atm machine starting screen
  cout << "--(C)heck your balance\n" << "--(D)eposit\n" << "--(W)ithdraw\n" << "--(E)xit\n" << endl;
  cin >> op; // above is the 4 different options to use to manage money in the atm
  //also above is the input for which fo the four commands to use

  if (op == 'C') cout << "Your balance is: " << money << endl;    //Command for checking balance      
  else if (op == 'D'){
    cout << "How much money do you want to deposit?" << endl;  //command for depositing money into the account
    cin >> input;
    money = money+input;
    cout << "Your current balance is: " << money << endl;
    return 0;
  }
  else if (op == 'W'){       
    cout << "How much money do you want to withdraw?" << endl;   //command for withdrawing money from account
    cin >> input;
    if (input > money){
      cout << "You cannot remove more than you have in your account" << endl;} //safety feature to prevent overdraw
    else {
      money = money - input;
      cout << "Your current balance is: " << money << endl;
      return 0;
    }
  }
  else if (op == 'E'){
    cout << "Thank you and have a nice day!" << endl; //command to exit the atm machine without doing anything
  }
  else {
    cout << op << " is not an option - please try again" << endl; //safety feature to prevent the wrong operator
    //from being used
  }
  return 0;
}
