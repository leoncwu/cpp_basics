// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

void swapij(int &i, int &j){
  int k;
  k = j;
  j = i;
  i = k;
}

int main(){
  int i=2,j=3;

  swapij(i,j);

  cout << "i=" << i << ", j="  << j << endl;

  return 0;
}
