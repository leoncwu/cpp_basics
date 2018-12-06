//Homework of Chunlin Wu (cw34973)
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using std :: cout;
using std :: endl;
using std :: vector;
using std :: cin;
using std :: setw;
using std :: left;
using std :: right;

class matrix{
private:
  int dimension;
  vector<vector<int>> elements;
  int num_width;
public:
  matrix() {}
  matrix(int dim_input){
    dimension = dim_input;
    elements = vector<vector<int>>(dim_input,vector<int>(dim_input));
  }

  void set(){
    for(int i = 0; i < dimension; i++){
      for(int j = 0; j <= i; j++){
        if(j == 0 || j == i){
          elements.at(i).at(j) = 1;
	}else{
          elements.at(i).at(j) = elements.at(i-1).at(j-1) + elements.at(i-1).at(j);
	}
      }
    }
  }

  int get_width(){
    num_width = 0;
    for(int i = 0; i < dimension; i++){
      for(int j = 0; j <= i; j++){
        int num = elements.at(i).at(j);
        int wid_count = 1;
        while (num !=0) {   
	  wid_count++;  
	  num/=10;
	}
        if(wid_count > num_width){num_width = wid_count;}
      }
    }
  }

  int get(int i, int j){
    return elements.at(i).at(j);
  }

  void print(){
    get_width();
    for(int i = 0; i < dimension; i++){
      cout << "Row " << right << setw(3) << i+1 
           << left << setw(num_width*(dimension-i)/2) <<": ";
      for(int j = 0; j <= i; j++){
        cout << right << setw(num_width) << elements.at(i).at(j);
      }
      cout << endl;
    }
  }

  void print(int m){
    get_width();
    cout << "  '*' represent that the coefficient cannot be divided by '" << m << "'." << endl;
    cout << "  ' ' represent that the coefficient can be divided by '" << m << "'." << endl;
    for(int i = 0; i < dimension; i++){
      cout << "Row " << right << setw(3) << i+1
           << left << setw(num_width*(dimension-i)/2) <<": ";
      for(int j = 0; j <= i; j++){
        if(elements.at(i).at(j)%m != 0){
          cout << right << setw(num_width) << '*';
        }else{
          cout << right << setw(num_width) << ' ';
	}
      }
      cout << endl;
    }
  }

};

int main(){
  int n;
  cout << "Please input the dimension of the Pascal’s triangle: ";
  cin >> n;
  int m;
  cout << "Please input the integer divisor of the coefficients: ";
  cin >> m;

  matrix pascal(n);
  pascal.set();
  pascal.print();
  pascal.print(m);

  return 0;
}
