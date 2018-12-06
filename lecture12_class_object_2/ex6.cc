// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class primegenerator{
private:
  int number_of_primes_found = 0;
  int last_number_tested = 2;
  bool prime;
public:
  int nextprime(){
    prime = true;
    for(int i=2; i< last_number_tested && prime; i++){
      if(last_number_tested%i == 0){
	prime = false;
      }
    }
    last_number_tested++;
    if(prime){
      number_of_primes_found++;
      return last_number_tested-1;
    }
  }
  int get_number_of_primes_found(){
    return number_of_primes_found;
  }
  bool get_prime(){
    return prime;
  }
};

int main(){
  primegenerator sequence;
  int how_many;
  cout << "Input how many successive prime numbers required:" << endl;
  cin >> how_many;
  while(sequence.get_number_of_primes_found() < how_many){
    int number = sequence.nextprime();
    if(sequence.get_prime()){
      cout << "Number " << number << " is prime." << endl;
    }
  }

  return 0;
}
