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
  Point() {}
  Point(double x, double y) : x(x), y(y) {}
public:
  double getx(){ return x;}
  double gety(){ return y;}
  void setx(double x_in) {x=x_in;}
  void sety(double y_in) {y=y_in;}
};

class Rectangle{
private:
  Point  bl, tr;
public:
  Rectangle(Point bl, float w, float h) : bl(bl) {
    tr.setx(bl.getx() + w);
    tr.sety(bl.gety() + h);
  };
  Rectangle(Point bl, Point tr) : bl(bl), tr(tr) {};
public:
  double area() {
    cout << "area: " << (tr.getx() - bl.getx())*(tr.gety() - bl.gety()) << endl;
    return (tr.getx() - bl.getx())*(tr.gety() - bl.gety());
      }
  double width1(){
    cout << "width: " << tr.getx() - bl.getx() << endl;
    return tr.getx() - bl.getx();
  }
  double height1(){
    cout << "height: " << tr.gety() - bl.gety() << endl;
    return tr.gety() - bl.gety();
  }
};

int main(){
  double x1,y1,x2,y2;

  cout << "input x of point 1" << endl;
  cin >> x1;
  cout << "input y of point 1" << endl;
  cin >> y1;

  cout << "input x of point 2" << endl;
  cin >> x2;
  cout << "input y of point 2" << endl;
  cin >> y2;

  Point p1(x1,y1);
  Point p2(x2,y2);

  Rectangle recg(p1,p2);

  double ar = recg.area();
  double wd = recg.width1();
  double hg = recg.height1();

  return 0;
}
