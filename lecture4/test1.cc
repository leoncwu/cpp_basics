#include <iostream>

using std :: cout;
using std :: endl;

int main(){
  for(int i=1; i<=2 ; i+=2){
    cout << i << endl;
  }

  int i;
  i=4;
  i*=2;
  cout << i << endl;

  i=4;
  i/=2;
  cout << i << endl;

  i=4;
  i+=2;
  cout << i << endl;

  i=4;
  i-=2;
  cout << i << endl;

  return 0;
}
