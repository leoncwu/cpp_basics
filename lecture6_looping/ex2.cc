#include <iostream>
using std::cout;
using std::endl;
using std::cin;
// Assignment of Chunlin Wu (cw34973)
int main(){
  int input, residual, divisor;
  bool prime;
  
  prime = false;
  cout << "Please input an integer number:" << endl ;
  cin >> input;
  
  for(int i=2; i<input; i++){
    residual = input%i;
    if(residual == 0){
      divisor = i;
      prime = true;
      cout << "Your number is not prime: it is divisible by "<< divisor << endl;      
    }
  }

  if(prime != true){
    cout << "Your number is prime"<< endl;
  }

  return 0;
}




// c - space  select
// exc w
// c - y

// save a block to a new file
// c - space
// c - w
// c - x c - f

// multiple windows
// c - x 2 : make 2 horizontal windows
// c - x 3 : make 2 vertical windows
// c - x 1 : close the other window
// c - x o : switch between windows

// c - space select
// c - c 


// C - v
// esc - v
