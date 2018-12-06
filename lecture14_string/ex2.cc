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
  string letter;

  cout << "input an integer:" << endl;
  cin >> s;
  cout << "input an string:" << endl;
  cin >> letter;

  for(char &c : letter){
    t = c + s;
    if(t <= 122){
      c += s;
    }
    else{
      c = s- (122-c) + 96;
    }

  }

  cout << "Shifted: " << letter << endl;

  return 0;
}
