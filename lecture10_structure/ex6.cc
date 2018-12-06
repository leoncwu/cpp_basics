// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct primesequence {int number_of_primes_found; int last_number_tested; bool prime;};

int nextprime(struct primesequence &sequence){
  sequence.prime = true;
  for(int i=2; i< sequence.last_number_tested && sequence.prime; i++){
    if(sequence.last_number_tested%i == 0){
      sequence.prime = false;
    }
  }
  sequence.last_number_tested++;
  if(sequence.prime){
    sequence.number_of_primes_found++;
    return sequence.last_number_tested-1;
  }
}

int main(){
  struct primesequence sequence {0,2,true};
  int how_many;
  cout << "Input how many successive prime numbers required:" << endl;
  cin >> how_many;
  while(sequence.number_of_primes_found < how_many){
    int number = nextprime(sequence);
    if(sequence.prime){
      cout << "Number " << number << " is prime." << endl;
    }
  }

  return 0;
}
