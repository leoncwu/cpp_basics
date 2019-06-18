// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

class even_odd{
private:
  vector<int> even, odd;
  //public:
  //  even_odd(vector<int> numbers1) : numbers1(numbsers){}
public:
  void seperate_even_odd(vector<int> numbers){
    int e_cout = 0;
    int o_cout = 0;
    for(auto e : numbers){
      if(e%2 == 0){
        even.push_back(e);
	/*	even[e_cout++] = e;*/
      }
      else{
        odd.push_back(e);
	/*	odd[o_cout++] = e;*/
      }
    }
  }
  void print_even_odd(){
    cout << "Even numbers in the vector: " << endl;
    for(int e : even){
      cout << e << ", ";
    }
    cout << "" << endl;
    cout << "Odd numbers in the vector: " << endl;
    for(int e : odd){
      cout << e << ", ";
    }
    cout << "" << endl;

  }
};

int main(){
  double sum, scale;
  int length;

  cout << "input the length of the vector" << endl;
  cin >> length;

  vector<int> x(length);

  cout << "All the numbers in the vector:" << endl;
  for(int ct=0; ct<length; ct++){
    x[ct] = rand();
    cout << x[ct] <<" ";
  }
  cout << "" << endl;

  class even_odd e_o_number;
  e_o_number.seperate_even_odd(x);
  e_o_number.print_even_odd();

  return 0;
}
