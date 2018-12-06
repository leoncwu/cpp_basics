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
  double distance(Vector q1) {return sqrt((vx-q1.vx)*(vx-q1.vx) + (vy-q1.vy)*(vy-q1.vy));}
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

  cout << "The distance between 2 points is " << P1.distance(Q1) << endl;

  return 0;
}
