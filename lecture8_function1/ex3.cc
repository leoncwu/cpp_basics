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
  int how_many, number_of_primes_found, current_number;
  bool isprime;

  cout << "Input how many successive prime numbers required:" << endl;
  cin >> how_many;
  number_of_primes_found = 0;
  current_number = 2;
  while(number_of_primes_found < how_many){
    isprime=primality_test(current_number);
    if(isprime){
      number_of_primes_found++;
      cout << current_number << endl;
    }
    current_number++;
  }

  

  return 0;
}
