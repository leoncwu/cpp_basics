// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};

void swap(struct vector &b){
  double swap;
  swap = b.x;
  b.x = b.y;
  b.y = swap;

}


int main() {
  struct vector a;
  double alpha, pifrac;

  cout << "input coordiantes 1" << endl;
  cin >> a.x;
  cout << "input coordiantes 2" << endl;
  cin >> a.y;

  swap(a);

  cout << "Swaped vector is now (" << a.x << "," << a.y << ")" <<  endl;

  return 0;
}
