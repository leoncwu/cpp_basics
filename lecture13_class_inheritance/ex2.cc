// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Point{
private:
  double x,y;
public:
  Point(double x, double y) : x(x), y(y) {}
public:
  void setx(double x0) {x=x0;}
  void sety(double y0) {y=y0;}
  double getx(){ return x;}
  double gety(){ return y;}
};

class Straight_line{
protected:
  Point p1, p2;
  //  double slope, cross_section;
public:
  Straight_line(double x1, double y1, double x2, double y2){
    p1.setx(x1);
    p1.sety(y1);
    p2.setx(x2);
    p2.sety(y2);
  }
public:
  double evaluate_at(double x) {
    return slope*x + cross_section;
      }
  double slope(){
    double slope1 = (p2.gety() - p1.gety()) / (p2.getx() - p1.getx());
    return slope1;
  }
  double intercept(){
    double cross_section = (-p1.getx())/(p2.getx() - p1.getx())*(p2.gety() - p1.gety())+p1.gety();
    return cross_section;
  }
};


class Linear_function : public Straight_line{
public:
  Linear_function(double x1, double y1, double y2) : Straight_line(x1,y1,x1,y2){
  }
};

int main(){
  double alpha,pifrac;
  double x1,y1,x2,y2,x;

  cout << "input x of point 1" << endl;
  cin >> x1;
  cout << "input x of point 1" << endl;
  cin >> y1;

  cout << "input x of point 2" << endl;
  cin >> x2;
  cout << "input x of point 2" << endl;
  cin >> y2;

  cout << "input the coordinate x" << endl;
  cin >> x;

  //  Point p1(x1,y1);

  //  cout << p1.getx() << p1.gety() << p2.getx() << p2.gety() << endl;

  //  Linear_function line(p1,p2);
  //  cout << "slope: " << line.get_slope() << ", cross: " << line.get_cross() << endl;
  //  cout << "Value at " << x << " is " << line.evaluate_at(x) << endl;

  return 0;
}
