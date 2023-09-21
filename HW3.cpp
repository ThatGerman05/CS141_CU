#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//use inventory.txt to input and report.txt for output.

// function to read product data from a file
void readFromFile(ifstream &inputFilename, string &name, int &store, int &stockroom, int &wharehouse, int &expectedTotal) {

  getline(inputFilename, name);
  inputFilename >> store >> stockroom >> wharehouse >> expectedTotal; 
  inputFilename.get();
}

// function to write product data to a file
void writeProductData(ofstream& inputFilename, string &name, int &store, int &stockroom, int &wharehouse, int &total, int &expectedTotal) {

    if (total == expectedTotal) {
      cout << "Inventory for " << name << " is at the expected amount." << endl;
    } else if (total < expectedTotal) {
      cout << "Inventory for " << name << " is under the expected amount." << endl;
    } else if (total > expectedTotal){
      cout << "Inventory for " << name << " is over the expected amount." << endl;
    }
    else {
      cout << "error" << endl;
    }

   inputFilename << name << " " << store << " " << stockroom << " " << wharehouse << " " << total << " " << expectedTotal << endl;


}


int main() {
  ifstream inputFilename;
  ofstream outputFilename;
  char inputfile[80];
  char outputfile[80];
  string name;
  int store, stockroom, wharehouse;
  int total, expectedTotal;
  int totalInventory = 0;
  int count;


  // prompt user for input and output file names
  cout << "Enter input file name: ";
  cin >> inputfile;
  cin.get();
  cout << "Enter output file name: ";
  cin >> outputfile;
  cin.get();
  // open input file

  inputFilename.open(inputfile);
  inputFilename >> count;
  inputFilename.get();


  // open output file
  outputFilename.open(outputfile);


  // read product data from file, calculate total inventory, compare with expected total, and write updated data to file
  for (int i = 0; i < count; i++) {

    readFromFile(inputFilename, name, store, stockroom, wharehouse, expectedTotal);

    total = store + stockroom + wharehouse;

    totalInventory += total;

    writeProductData(outputFilename, name, store, stockroom, wharehouse, total, expectedTotal);
  }

  
  inputFilename.close();
  outputFilename.close();

  cout << "Total inventory: " << totalInventory << endl;

  return 0;
}
