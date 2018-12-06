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
  double getx(){ return x;}
  double gety(){ return y;}
};

class Linear_function{
private:
  double slope, cross_section;
public:
  Linear_function(Point p, Point q){
    slope = (q.gety() - p.gety()) / (q.getx() - p.getx());
    cross_section = (-p.getx())/(q.getx() - p.getx())*(q.gety() - p.gety())+p.gety();
  }
public:
  double evaluate_at(double x) {
    return slope*x + cross_section;
      }
  double get_slope(){
    return slope;
  }
  double get_cross(){
    return cross_section;
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

  Point p1(x1,y1);
  Point p2(x2,y2);

  //  cout << p1.getx() << p1.gety() << p2.getx() << p2.gety() << endl;

  Linear_function line(p1,p2);
  //  cout << "slope: " << line.get_slope() << ", cross: " << line.get_cross() << endl;
  cout << "Value at " << x << " is " << line.evaluate_at(x) << endl;

  return 0;
}
