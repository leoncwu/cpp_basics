// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

bool is_divisible(int number, int divisor, int &remainder){
  bool divisible = false;
  remainder = number%divisor;
  if(remainder == 0){
    divisible = true;
  }
  return divisible;
}

int main(){
  int number,divisor,remainder;

  cout << "Please input the number to divede" << endl;
  cin >> number;

  cout << "Please input the divisor" << endl;
  cin >> divisor;

  if(is_divisible(number,divisor,remainder)){
    cout << number << " is divisible by " << divisor << endl;
  }
  else{
    cout << number << "/" << divisor << " has remainder " << remainder << endl;
  }

  return 0;
}
