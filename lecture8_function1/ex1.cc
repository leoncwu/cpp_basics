// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

double sum_pair(double a, double b){
  return sqrt(b*b+a*a);
}

int main(){
  double x, y;

  cin >> x;
  cin >> y;

  cout << sum_pair(x,y) << endl;

  return 0;
}
