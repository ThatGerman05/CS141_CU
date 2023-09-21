//Logan Wultsch-Fuller, lab 12 

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  int age;
public:
  // Constructor taking name and age
  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
    
  // Member function to introduce the person
  void introduce() {
    cout << "My name is " << name << " and I am " << age << " years old." << endl;
  }
    
  // Member function to get the age of the person
  int getAge() {
    return age;
  }
    
  // Member function to set the age of the person
  void setAge(int newAge) {
    age = newAge;
  }
};

int main() {
  Person somebody("John", 18);
  somebody.introduce();
  somebody.setAge(20);
  cout << "My new age is " << somebody.getAge() << endl;
  return 0;
}
