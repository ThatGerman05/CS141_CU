// Logan Wultsch-Fuller
// Lab 7 - Program used to write advice to a user using files
// Due: 3/3/2023

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  ifstream in;
  ofstream out;
  char info;
  char enter;
  //declaring the vairables to be used in the program, chars for the text and input and output streams

  in.open("UserAdvice.txt"); // opening the reading text file

  cout << ">>>>Previous Advice: \n";

  while (!in.eof()){ // while loop to to get the information in the text file
    info = in.get();
    cout.put(info);
  }
  in.close(); // closing the reading text file

  cout << endl;  
  cout << ">>>>Your advice to the next user. Hitting ENTER twice to exit: \n";
  
  out.open("UserAdvice.txt"); // opening the text file for input/writing  
  info = cin.get();

  while(!(info == '\n' && enter == '\n')){ //  while loop with comparsion that end once the user presses enter twice
    out << info;
    enter = info;
    cin.get(info);

  } // while loop used to take in the info that the user types in
  out.close(); // closing the file for input/writing

  cout << "Thanks for your advice." << endl;
  cout << endl;
  return 0;
}
