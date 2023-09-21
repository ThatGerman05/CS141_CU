#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 10; // maximum number of elements in the array

int main() {
  double numbers[MAX_SIZE] = {0}; // array to hold the numbers, initialized to 0
  int num_elements = 0; // number of elements in the array
  double sum = 0; // sum of the numbers
  double mean = 0; // mean of the numbers
  double stddev = 0; // standard deviation of the numbers

  // open the input file
  ifstream infile("input.txt");
  if (!infile) {
    cerr << "Error: could not open file." << endl;
    return 1;
  }

  // read in the numbers and count how many were read
  double temp;
  while (num_elements < MAX_SIZE && infile >> temp) {
    numbers[num_elements] = temp;
    num_elements++;
  }

  // close the file
  infile.close();

  // calculate the mean
  if (num_elements > 0) {
    for (int i = 0; i < num_elements; i++) {
      sum += numbers[i];
    }
    mean = sum / num_elements;
  }

  // calculate the standard deviation
  double sum_squares = 0;
  for (int i = 0; i < num_elements; i++) {
    sum_squares += pow(numbers[i] - mean, 2);
  }
  if (num_elements > 1) {
    stddev = sqrt(sum_squares / (num_elements - 1));
  }

  // output the results
  cout << "Average: " << mean << endl;
  cout << "Standard deviation: " << stddev << endl;

  return 0;
}
