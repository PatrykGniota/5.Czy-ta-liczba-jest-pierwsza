#include <iostream>
using namespace std;

void factorization(int x){
  int d =  3;
  cout << x << " = ";
  while(d * d <= x){
    while(x % 2 == 0){
    cout << 2 << " * ";
    x = x / 2;
    }
    if(x % d == 0){
      cout << d << " * ";
      x = x / d;
    }
    else{
      d += 2;
    }
  }
  cout << x;
}

int main() {

  int num = 0;
  
  cout << "num = ";
  cin >> num;

  factorization(num);
  
}