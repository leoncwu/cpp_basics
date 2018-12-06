// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
  int s,t;
  string letter, letter1;

  cout << "input an string:" << endl;
  cin >> letter;

  for(char c : letter){
    if(c == 48){
      letter1 = "zero";
    }
    else if(c == 49){
      letter1 = "one";
    }
    else if(c == 50){
      letter1 = "two";
    }
    else if(c == 51){
      letter1 = "three";
    }
    else if(c == 52){
      letter1 = "four";
    }
    else if(c == 53){
      letter1 = "five";
    }
    else if(c == 54){
      letter1 = "six";
    }
    else if(c == 55){
      letter1 = "seven";
    }
    else if(c == 56){
      letter1 = "eight";
    }
    else if(c == 57){
      letter1 = "nine";
    }
    else{
      letter1 = "NaN";
    }
    cout << letter1 << ' ';
  }
  cout << endl;

  return 0;
}
