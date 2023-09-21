// prime numbers by nested loops
// spring 23
#include <iostream>
using namespace std;

int main () {
  bool prime;
  int half;
  for (int i = 2; i <= 100; i++) {
    half = i / 2;
    prime = true;
    for (int j = 2; j <= half; j++) {
      if ((i % j) == 0) prime = false;
    }
    if (prime) cout << i << endl;
  }
  return 0;
}
