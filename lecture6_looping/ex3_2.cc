#include <iostream>
#include <algorithm>    // std::min
using std::cout;
using std::endl;
using std::cin;
using std::min;
using std::max;
// Assignment of Chunlin Wu (cw34973)
int main(){
  int up_limit, low_limit;
  
  for(int i=1; i<=10; i++){
    up_limit = min(i+1,10);
    low_limit = max(i-1,1);
    for(int j=low_limit; j<=up_limit; j++){
      if(j !=up_limit ){
	cout << "i,j=" << i << "," << j << " ";
      }
      else{
          cout << "i,j=" << i << "," << j << endl;
      }
    }
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
