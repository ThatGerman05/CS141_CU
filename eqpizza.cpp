//given a rectangular pizza, how big should a round pizza be to be the same area

#include <iostream>
#include <cmath>

using namespace std;


const double PI = 3.1416;


int main() {

  double l, w, r, area; // length, width, radius and area

  cout << "Length and width ";
  cin >> l >> w ;

  area = l * w;

  r = sqrt(area / PI);

  cout << "Equivalent would be " << 2 * r << "inches\n";
  return 0;
}
