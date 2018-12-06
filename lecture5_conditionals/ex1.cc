#include <iostream>
using std::cout;
using std::endl;
using std::cin;
// Assignment of Chunlin Wu (cw34973)
int main(){
  int input;
  int residual1, residual2;
  cout << "Please input the number for calculation:" << endl ;
  cin >> input;
  //  cout << "Processing ..." << endl ;
  residual1 = input%3;
  residual2 = input%5;
  if(residual1 == 0  && residual2 ==0){
    cout << "'Fizzbuzz!'" << endl;
  }
  else if(residual1 == 0){
    cout << "'Fizz!'"<< endl;
  }
  else if(residual2 == 0){
    cout << "'Buzz!'"<< endl;
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
