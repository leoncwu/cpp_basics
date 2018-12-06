#include <iostream>
#include <cmath>

using std :: cout;
using std :: endl;

class Vector{
private:
  double vx, vy;
public:
  Vector() {};
  Vector(double x, double y) : vx(x), vy(y) {}
public:
  Vector scale(double a){
    return Vector(vx*a, vy*a);
  }
  double length(){
    return sqrt((vx*vx)+(vy*vy));
  }
};


  int main(){

    Vector v1, v2;
    cout << v1.length() << endl;

    v2 = v1.scale(2.);
    cout << v2.length() << endl;

    return 0;
  }
