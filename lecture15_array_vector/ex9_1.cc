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
  vector<int> elements;
public:
  matrix() {}
  matrix(int dim_input){
    dimension = dim_input;
    // storage is arranged to require exactly as much space as needed
    elements = vector<int>((dim_input+1)*dim_input/2);
  }

  int get(int i, int j){
    return elements.at((1+i)*i/2+j);
  }

  void set(int i, int j, int value){
    elements.at((1+i)*i/2+j) = value;
  }

  void set_triangle_coefficients(){
    for(int i = 0; i < dimension; i++){
      for(int j = 0; j <= i; j++){
        if(j == 0 || j == i){
          set(i, j, 1);
	}else{
          set(i, j, get(i-1,j-1) + get(i-1,j));
	}
      }
    }
  }

  int get_width(){
    int num_width = 0;
    for(int i = 0; i < dimension; i++){
      for(int j = 0; j <= i; j++){
        int num = get(i,j);
        int wid_count = 1;
        while (num !=0) {   
	  wid_count++;  
	  num/=10;
	}
        if(wid_count > num_width){num_width = wid_count;}
      }
    }
    return num_width;
  }

  void print(){
    int num_width = get_width();
    for(int i = 0; i < dimension; i++){
      cout << "Row " << right << setw(3) << i+1 
           << left << setw(num_width*(dimension-i)/2) <<": ";
      for(int j = 0; j <= i; j++){
        cout << right << setw(num_width) << get(i,j);
      }
      cout << endl;
    }
  }

  void print(int m){
    int num_width = get_width();
    cout << "  '*' represent that the coefficient cannot be divided by '" << m << "'." << endl;
    cout << "  ' ' represent that the coefficient can be divided by '" << m << "'." << endl;
    for(int i = 0; i < dimension; i++){
      cout << "Row " << right << setw(3) << i+1
           << left << setw(num_width*(dimension-i)/2) <<": ";
      for(int j = 0; j <= i; j++){
        if(get(i,j)%m != 0){
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
  pascal.set_triangle_coefficients();
  pascal.print();
  pascal.print(m);

  return 0;
}
