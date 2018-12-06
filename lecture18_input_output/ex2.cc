#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using std:: cin;
using std:: cout;
using std:: endl;
using std:: setw;
using std:: vector;

int main(){
  vector<double> numbers(3);
  double fractpart,intpart;
  numbers[0] = 1.345;
  numbers[1] = 23.789;
  numbers[2] = 456.1234;
  
  for(int i=0; i<numbers.size(); i++){
    fractpart = modf (numbers[i] , &intpart);
    cout << intpart << '.'  << fractpart << endl;

  }

 

  return 0;

}
