// Assignment of Chunlin Wu (cw34973)
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
  int input, collatz;
  int length, longest, start_num;

  cout << "Please input an integer: " <<endl;
  cin >> input;

  longest = 0;
  for(int i=1; i<=input; i++){
    collatz = i;
    length = 1;
    do{
      if(collatz%2 == 0){    //even
        collatz = collatz/2;
      }
      else{                  // odd
        collatz = 3*collatz + 1;
      }
      length = length + 1;
      //      cout << collatz << " ";
    } while(collatz > 1);
    //    cout << " " << endl;
    if(length > longest){
      longest = length;
      start_num = i;
    }
  }
  cout << "longest sequence lentgh: " << longest << "; starting number: " << start_num << endl;

  return 0;
}
