#include <iostream>

using std :: cout;
using std :: endl;

struct Numbers{int x; double y;};

int main(){

  struct Numbers number{1, 1.1};

  cout << number.x << " " << number.y << endl;

  number.x = number.y + 1;
  cout << number.x << " " << number.y << endl;

  return 0;
}
