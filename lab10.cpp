// Logan Wultsch-Fuller = 3/31/2023
// lab 10 = sorting unser inputs using vectors

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> numbers;
  int num;

  // get input from user
  cout << "Enter numbers to be sorted (negative number to end input):" << endl;
  while (cin >> num && num >= 0) {
    numbers.push_back(num);
  }

  // sort the vector
  sort(numbers.begin(), numbers.end());

  // print out the sorted vector
  cout << "Sorted numbers:" << endl;
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
