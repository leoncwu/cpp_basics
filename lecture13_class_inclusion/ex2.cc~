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

class Rectangle{
private:
  Point  bl;
  double width, height;
public:
  Rectangle(Point b, double w, double h) : bl(b), width(w), height(h){}
public:
  double area() {
    cout << "area: " << width*height << endl;
    return width*height;
      }
  double width1(){
    cout << "width: " << width << endl;
    return width;
  }
  double height1(){
    cout << "height: " << height << endl;
    return height;
  }
};

int main(){
  double alpha,pifrac;
  double x1,y1,hgt,wid;

  cout << "input x of point 1" << endl;
  cin >> x1;
  cout << "input x of point 1" << endl;
  cin >> y1;

  cout << "input width" << endl;
  cin >> wid;
  cout << "input height" << endl;
  cin >> hgt;

  Point p1(x1,y1);

  Rectangle recg(p1,wid,hgt);

  double ar = recg.area();
  double wd = recg.width1();
  double hg = recg.height1();
  //  cout << p1.getx() << p1.gety() << p2.getx() << p2.gety() << endl;

  //  cout << "slope: " << line.get_slope() << ", cross: " << line.get_cross() << endl;
    //  cout << "Value at " << x << " is " << line.evaluate_at(x) << endl;

  return 0;
}
