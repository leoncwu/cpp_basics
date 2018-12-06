// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

vector<double> random_vector(int length1){
  vector<double> vector_creation(length1);
  for(int ct=0; ct<length1; ct++){
    vector_creation[ct] = 1.*rand()/RAND_MAX;
  }
  return vector_creation;
}

vector<double> sort(vector<double> vector_sort){
  for(int i=0 ; i<=vector_sort.size()-2; i++){
    for(int j=i+1 ; j<=vector_sort.size()-1; j++){
      double swap = vector_sort[i];
      if(swap > vector_sort[j]){
        vector_sort[i] = vector_sort[j];
        vector_sort[j] = swap;
      }
    }
  }
  return vector_sort;
}

int main(){
  double sum, scale;
  int length;

  cout << "input the length of the vector" << endl;
  cin >> length;

  vector<double> values(length);

  values=random_vector(length);
  for(int ct=0; ct<length; ct++){
    cout << values[ct] <<" ";
  }
  cout << "" << endl;

  values=sort(values);
  for(int ct=0; ct<length; ct++){
    cout << values[ct] <<" ";
  }
  cout << "" << endl;

  return 0;
}
