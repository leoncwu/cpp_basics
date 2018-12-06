// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

int recursion(int n){
  if(n == 1){
    return 1;
  }
  else{
    return n*n + recursion(n-1);
  }
}

double main(){
  int sn;
  int n;

  cout << "Please input the number" << endl;
  cin >> n;

  sn = recursion(n);

  cout << sn << endl;

  return 0;
}
