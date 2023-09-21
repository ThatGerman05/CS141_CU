// size of room using trig

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double opp, adj, hyp;
  double angle;

  cout << "Opposite and adjacent sides ";
  cin >> opp >> adj;
  angle = atan(opp/adj);
  hyp = adj/cos(angle);

    cout << "Slope is " << hyp << " inches long\n" << endl;
  return 0;
}
