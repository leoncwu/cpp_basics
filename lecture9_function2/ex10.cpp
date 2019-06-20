#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main(){
  bool check_right = true;

  int i = 3;
  if(check_right){
    int i = 5;
    cout << i << endl;
  }
  cout << i << endl;

  if(check_right){
    double i = 5.1;
    cout << i << endl;
  }
  cout << i << endl;




}
