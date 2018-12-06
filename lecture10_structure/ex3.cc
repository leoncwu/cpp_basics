// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct vector {double x; double y;};

struct vector vector_multiple(struct vector v, double m){
  struct vector v_multi;
    v_multi.x = m*v.x;
    v_multi.y = m*v.y;
    return v_multi;
}


int main() {
  struct vector a, b;
  double mul;

  cout << "input coordiantes 1" << endl;
  cin >> a.x;
  cout << "input coordiantes 2" << endl;
  cin >> a.y;
  cout << "input an multiple" << endl;
  cin >> mul;

  b = vector_multiple(a,mul);

  cout << "vector (" << a.x << "," << a.y << ") " << "multipled by " << mul << " is " << "(" << b.x << "," << b.y << ") " << endl;

  return 0;
}
