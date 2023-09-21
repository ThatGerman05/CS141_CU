//Logan Wultsch-Fuller
//Lab7 - program to find the squares of numbers in a file

#include<iostream>
#include<fstream>
using namespace std;

int main() {
  ifstream in;
  ofstream out;
  int num, square; // creating variables for input and output as well as the numbers


  in.open("numbers.txt"); // opening the input and output files
  out.open("squares.txt"); 

  while (in >> num){  // while loop that runs each time for every number it reads
    square = num*num; // calculation for the square of the number read 
    out.unsetf(ios::right);
    out.setf(ios::left);
    out.width(10);
    out << num;
    out.setf(ios::right);
    out.width(10);
    out << square << endl; // setting the widths of the outputs to make it look nice and writing the outputs
 
  }
  in.close(); // closing the input and output files
  out.close();
}
