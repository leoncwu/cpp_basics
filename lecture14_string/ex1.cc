// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

int main(){
  int charnum, charnum1;
  char letter,letter1;

  cout << "input an integer between -26 and 26, except for 0:" << endl;
  cin >> charnum;

  if(charnum > 0){
  charnum1 = 'a' + charnum - 1;
  charnum+=96;
  }
  else{
    charnum1 = 'A' - (charnum + 1);
    charnum = abs(charnum) + 64;
  }

  letter = charnum;
  letter1 = charnum1;
  cout << letter << endl;
  cout << letter1 << endl;
  return 0;
}
