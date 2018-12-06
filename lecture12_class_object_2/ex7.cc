// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class primegenerator{
private:
  int p, q;
  bool p_is_prime, q_is_prime;
public:
  bool primetest(int number_testing){
    bool prime = true;
    for(int divisor=2; divisor < number_testing && prime; divisor++){
      if(number_testing%divisor == 0){
	prime = false;
      }
    }
    return prime;
  }
  void sum_of_two_primes_equal(int p_plus_q){
    p_is_prime = false;
    q_is_prime = false;
    for(p = 2; p < p_plus_q-1 && !(p_is_prime && q_is_prime); p++){
      q = p_plus_q - p;
      p_is_prime = primetest(p);
      q_is_prime = primetest(q);
      if(p_is_prime && q_is_prime){
        cout << p_plus_q << "=" << p << "+" << q << endl;
      }
    }
  }
};

int main(){
  primegenerator Goldbach_conjecture;
  int up_bound;
  cout << "Input the upper bound of even numbers to be tested:" << endl;
  cin >> up_bound;
  for (int current_even_number=4; current_even_number <= up_bound; current_even_number+=2){
    Goldbach_conjecture.sum_of_two_primes_equal(current_even_number);
  }
  return 0;
}
