// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;


int main(){
  int maxnum = 0;
  int e;
  vector<int> numbers = {1,-4,2,-6,5};

  for(e=0; 5; e++){
    if(numbers[e]<0){
      break;
    }
  }

  cout << e+1 << endl;

  return 0;
}
