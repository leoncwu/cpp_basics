// Homework of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
#include <vector>

use std:: cin;
use std:: cout;
use std:: endl;
use std:: vector;


class matrix_int{
private:
  int rows, cols;
  vector<int> elements(rows*cols);
public:
  matrix_int(int row, int col) : rows(row), cols(col) {}
public:
  void get(int i,int j) {
    return elements.at(i*cols+j);
  }
}


int main(){







  return 0;
}
