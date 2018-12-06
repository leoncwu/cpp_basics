// Assignment of Chunlin Wu (cw34973)
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

int fibonac(int i){
  if(i ==1){
    return 1;
  }
  else if(i == 2){
    return 2;
  }
  else{
  return fibonac(i-1) + fibonac(i-2);
  }
}

double main(){
  int fibo;
  int n;

  cout << "Please input the number" << endl;
  cin >> n;

  for(int j = 1; j<=n; j++){ 
    for(int i = 1; i<=j; i++){
      fibo = fibonac(i);
    }
    cout << fibo << endl;
  }

  //  cout << fibo << endl;

  return 0;
}
