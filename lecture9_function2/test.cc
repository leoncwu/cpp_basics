#include <iostream>
#include <cmath>

using std :: cout;
using std :: endl;


double distance(double x, double y=0){
  return sqrt((x-y)*(x-y));
}

int main(){
  double a = 2;
  double b = 1;

  double d = distance(a);
  cout << d << endl;

  double e = distance(a,b);
  cout << e << endl;

  return 0;
}
