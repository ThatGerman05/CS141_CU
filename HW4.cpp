//Logan Wultsch-Fuller
//Homework 4 - using structs vectors and a user interface

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
#include <cmath>
using namespace std;


const int STORAGE_PLACE = 3;

struct Item {
  string name;
  int items[STORAGE_PLACE];
  int target;
  int total;
};

int get_item_total(Item item) {
  int total = 0;
  for (int i = 0; i < STORAGE_PLACE; i++) {
    total += item.items[i];
  }
  return total;
}

string over_under(int num){

  string answer = "";
  if (num > 0) {
    answer = "over by";
  }
  else if (num == 0) {
    answer = "at exact amount";
  }
  else answer = "under by";

  return answer + to_string(abs(num));
}


vector<Item> read_inventory(string inventory_file) {
  vector<Item> all_items;
  ifstream read_file;
  read_file.open(inventory_file);
 
  
  int number_of_items = 0 ;
  read_file >> number_of_items;
  read_file.get();
  for (int i = 0; i < number_of_items; i++) {
    Item current_item{};
    getline(read_file, current_item.name);
    for(int j = 0; j < STORAGE_PLACE; j++){
      read_file >> current_item.items[j];
    }
    read_file >> current_item.target;
    read_file.get();
    current_item.total = get_item_total(current_item);
    all_items.push_back(current_item);
  }
  read_file.close();

  return all_items;
}


int get_total(vector<Item> all_items) {
  int total = 0;
    for (int i = 0; i < all_items.size(); i++) {
      total += all_items[i].total;
    }
  return total;
}

void print_record(Item item) {
  cout << item.name << " ";
  for (int i = 0; i < STORAGE_PLACE; i++) {
    cout << item.items[i] << " ";
  }
  cout << item.total << " " ;
  cout << over_under(item.total - item.target) << endl;
}

void print_records_all(vector<Item> all_items){
  for (int i = 0; i < all_items.size(); i++) {
    print_record(all_items[i]);
  }
  return;
}


void print_overstocked_understocked_records(vector<Item> all_items, int multiplier) {
  for (int i = 0; i < all_items.size(); i++) {
    int stock = all_items[i].total - all_items[i].target;
    stock *= multiplier;
    if (stock > 0) {
      print_record(all_items[i]);
    }
  }
}

void print_item_total(vector<Item> all_items){
  int total = get_total(all_items);
  cout << "Item grand total: " << total << endl;
}

int main() {
  cout << "Welcome to Wultsch-Fuller Grocery" << endl;
  cout << "Please type your file option: " << endl;
  string inventory_file = " ";
  cin >> inventory_file;

  vector<Item> all_items = read_inventory(inventory_file);

  while(true){
    cout << endl << "Select an option" << endl;
    cout << "(P) Print all records" << endl;
    cout << "(O) Print the overstocked records" << endl;
    cout << "(U) Print the understocked records" <<  endl;
    cout << "(T) Print the total number of items" << endl;
    cout << "(X) Exit the program" << endl;
    char choice;
    cin >> choice;
    choice = toupper(choice);
    cout << endl;
    switch (choice) {
    case 'X':
      return 0;
    case 'P':
      print_records_all(all_items);
      break;
    case 'O':
      print_overstocked_understocked_records(all_items, 1);
      break;
    case 'U': 
      print_overstocked_understocked_records(all_items, -1);
      break;
    case 'T':
      print_item_total(all_items);
      break;
    }
  }
}
