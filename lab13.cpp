#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
  string name;
  int age;
  int ID;

public:
  // Default constructor
  Student() {
    name = "";
    age = 0;
    ID = 0;
  }

  // Parameterized constructor
  Student(string name, int age, int id) {
    this->name = name;
    this->age = age;
    this->ID = id;
  }

  // Getter functions
  string getName() {
    return name;
  }

  int getAge() {
    return age;
  }

  int getID() {
    return ID;
  }
};

int main() {
  // Create a vector of Student objects
  vector<Student> students(3);

  // Set the information for the first student using the default constructor
  students[0] = Student();

  // Set the information for the second student
  students[1] = Student("Alice", 20, 12345);

  // Set the information for the third student
  students[2] = Student("Bob", 21, 67890);

  // Print out the information for each student
  for (int i = 0; i < students.size(); i++) {
    cout << "Name: " << students[i].getName() << endl;
    cout << "Age: " << students[i].getAge() << endl;
    cout << "ID: " << students[i].getID() << endl;
    cout << endl;
  }

  return 0;
}
