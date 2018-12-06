#include <iostream>

using std :: cout;
using std :: endl;


int main(){

  int i = 2./3;
  cout << i << endl;

  int j = 0x2a;
  cout << j << endl;

  int k = 0b101010;
  cout << k << endl;

  int l = j*k;
  cout << l << endl;

  double a = j/l;
  cout << a << endl;
  return 0;
}
