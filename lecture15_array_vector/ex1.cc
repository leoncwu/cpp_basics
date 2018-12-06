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
  vector<int> numbers = {1,-4,2,-6,5};

  for(auto e : numbers){
    if(abs(e) > maxnum){
      maxnum = abs(e);
    }
  }

  cout << maxnum << endl;

  return 0;
}
