#include <iostream>
using namespace std;

int main() {

  int num = 0;
  int d = 3;
  
  cout << "num = ";
  cin >> num;
  cout << num << " = ";

  while(d * d <= num){
    while(num % 2 == 0){
      cout << 2 << " * ";
      num = num / 2;
    }
    if(num % d == 0){
      cout << d << " * ";
      num = num / d;
    }
    else{
      d += 2;
    }
  }
  cout << num;
}