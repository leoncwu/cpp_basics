// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Vector{
private:
  double  vx,vy;
public:
  Vector(double x, double y){
    vx = x; vy = y;
  }
public:
  double distance_to_origin() {return sqrt(vx*vx + vy*vy);}
  void pringout() {cout << vx << "," << vy << endl;}
  double angle() {return atan2(vy,vx);}

};

int main(){
  double alpha,pifrac;
  double xx,yy;

  cout << "input coordiantes 1" << endl;
  cin >> xx;
  cout << "input coordiantes 2" << endl;
  cin >> yy;

  Vector P1(xx,yy);
  cout << "The distance from the point to the origin is " << P1.distance_to_origin() << endl;
  P1.pringout();
  alpha = P1.angle();
  pifrac = (4.*atan(1.0)) / alpha;
  cout << "The angle between the vector and the x-axis is pi/" << pifrac << endl;

  return 0;
}
