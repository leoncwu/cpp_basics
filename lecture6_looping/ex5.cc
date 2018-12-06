// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;
using std::min;
using std::max;

int main(){
  int itimesj, iplusj, input;
  int i_limit;
  bool skip;

  cout << "Please input an integer: " <<endl;
  cin >> input;

  if(input > 80){
    cout << "input value exceed range!" <<endl;
    return 0;
  }

  skip = false;
  for(int i=0; i<10; i++){
    if(skip){
      break;
    }
    for(int j=0; j<10; j++){
      if(skip){
	break;
      }
      itimesj = i*j;
      if(itimesj > input ){
	cout << "i,j=" << i << "," << j << endl;
        skip = true;
      }
    }
  }

  skip = false;
  for(int iplusj=0; iplusj<19; iplusj++){
    if(skip){
      break;
    }
    i_limit = min(9,iplusj);
    for(int i=0; i<=i_limit; i++){
      if(skip){
        break;
      }
      int j = iplusj - i;
      if(j < 10){
        itimesj = i*j;
        if(itimesj > input ){
          cout << "i,j=" << i << "," << j << endl;
          skip = true;
        }
      }
    }
  }

  return 0;
}
