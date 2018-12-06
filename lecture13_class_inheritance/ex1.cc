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
protected:
  Point  bl;
  double width, height;
public:
  Rectangle(Point b, double w, double h) : bl(b), width(w), height(h){}
public:
  double areais() {
    return width*height;
      }
  double widthis(){
    return width;
  }
  double heightis(){
    return height;
  }
};

class Square : public Rectangle {
public:
  //  Square(Point b1, double x, double y) : Rectangle(b1,x,y) {
  //  if(widthis() != heightis()){
  //    cout << "ERROR: not a square: width=" << widthis() << " vs height=" << heightis() << endl;
  //  };
  //};
  Square(Point b1, double x) : Rectangle(b1,x,x) { cout << "Square:" << endl;};
};

int main(){
  double x1,y1,wid,hgt;

  cout << "input x of point 1" << endl;
  cin >> x1;
  cout << "input x of point 1" << endl;
  cin >> y1;

  cout << "input width" << endl;
  cin >> wid;

  cout << "input height" << endl;
  cin >> hgt;


  Point p1(x1,y1);

  Square sqr(p1,wid);

  double ar = sqr.areais();
  cout << "area is " << ar << endl;
  double wd = sqr.widthis();
  cout << "width is " << wd << endl;
  double hg = sqr.heightis();
  cout << "height is " << hgt << endl;

  return 0;
}
