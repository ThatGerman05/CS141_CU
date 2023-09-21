#include <iostream>

using namespace std;

struct Person {
  string name;
  int age;
  char gender;
};

int main() {
  Person people[3];

  for (int i = 0; i < 3; i++) {
    cout << "Enter information for person " << i+1 << ":" << endl;
    cout << "Name: ";
    getline(cin, people[i].name);
    cout << "Age: ";
    cin >> people[i].age;
    cout << "Gender (M/F): ";
    cin >> people[i].gender;
    cin.ignore(); // ignore newline character
  }

  cout << endl << "Information for each person:" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "Person " << i+1 << ":" << endl;
    cout << "Name: " << people[i].name << endl;
    cout << "Age: " << people[i].age << endl;
    cout << "Gender: " << people[i].gender << endl << endl;
  }

  return 0;
}
