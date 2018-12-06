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
  void halfway_point(Vector q1) {

    vx = 0.5*(vx + q1.vx);
    vy = 0.5*(vy + q1.vy);
    cout << "The half way point between 2 points is " << vx << ", " << vy << endl;
  }
};

int main(){
  double alpha,pifrac;
  double x1,y1,x2,y2;

  cout << "input coordiantes 1" << endl;
  cin >> x1;
  cout << "input coordiantes 2" << endl;
  cin >> y1;

  cout << "input coordiantes 1" << endl;
  cin >> x2;
  cout << "input coordiantes 2" << endl;
  cin >> y2;

  Vector P1(x1,y1);
  Vector Q1(x2,y2);

  P1.halfway_point(Q1);
  //    cout << "The half way point between 2 points is " << R1.vx << " " << R1.vy << endl;

  return 0;
}
