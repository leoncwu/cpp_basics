// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::vector;


vector<double> L2_norm(vector<double> y){
  double sum = 0.0;
  for(auto e : y){
    sum = sum + e*e;
  }
  cout << "square sum of elements before scaling: " << sum << endl;
  double scale = sqrt(sum);
  for(auto &e : y){
    e = e / scale;
  }
  sum = 0.0;
  for(auto e : y){
    sum = sum + e*e;
  }
  cout << "square sum of elements after scaling: " << sum << endl;

  return y;
}

int main(){
  double sum, scale;
  int length;

  cout << "input the length of the vector" << endl;
  cin >> length;

  vector<double> x(length);

  for(int ct=0; ct<length; ct++){
    x[ct] = 1.*rand()/RAND_MAX;
  }

  vector<double> x_norm=L2_norm(x);

  for(int ct=0; ct<length; ct++){
    cout << x_norm[ct] <<" ";
  }
  cout << "" << endl;
  return 0;
}
