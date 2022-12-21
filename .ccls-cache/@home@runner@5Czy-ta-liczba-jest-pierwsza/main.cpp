#include <iostream>
using namespace std;

int main() {

  int num = 0;
  int d = 2;
  
  cout << "num = ";
  cin >> num;
  cout << num << " = ";

  while(d * d <= num){
    if(num % d == 0){
      cout << d << " * ";
      num = num / d;
    }
    else{
      d++;
    }
  }
  cout << num;
}