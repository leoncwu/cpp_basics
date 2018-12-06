// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Linear_function{
private:
  double  vx,vy;
public:
  Linear_function(double input1, double input2){
    vx = input1; vy = input2;
  }
public:
  double evaluate_at(double x) {
    return vx*x + vy;
      }
};

int main(){
  double alpha,pifrac;
  double x1,y1,x;

  cout << "input slop" << endl;
  cin >> x1;
  cout << "input y axis cross point" << endl;
  cin >> y1;

  cout << "input coordiantes x" << endl;
  cin >> x;

  Linear_function line(x1,y1);
  cout << "Value at " << x << " is " << line.evaluate_at(x) << endl;

  return 0;
}
