// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

bool primality_test(int a){
  bool prime;
  prime = true;
  for(int i=2; i<a && prime; i++){
    if(a%i == 0){
      prime = false;
    }
  }
  return prime;
}

int main(){
  double x;
  bool isprime;

  cin >> x;
  isprime=primality_test(x);
  if(isprime){
    cout << x << " is a prime number" <<endl;
  }
  else{
    cout << x << " is not a prime number" <<endl;
  }
  return 0;
}
