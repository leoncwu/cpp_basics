// Assignment of Chunlin Wu (cw34973)
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
  int year;
  double bank1_depo, bank2_depo;

  bank1_depo = 100;
  bank2_depo = 200;
  year = 0;
  while(bank1_depo <= bank2_depo){
    bank1_depo = bank1_depo * 1.05;
    bank2_depo = bank2_depo * 1.02;
    year++;
    }

  cout << "The amount of money in the first account will be more than that in the second after " << year << " years." <<endl;
  cout << "The amount of money in the first account: " << bank1_depo << ". The amount of money in the second account: " << bank2_depo << endl;

  return 0;
}
