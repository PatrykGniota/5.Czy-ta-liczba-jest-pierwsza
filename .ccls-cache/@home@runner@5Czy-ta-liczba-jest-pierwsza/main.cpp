#include <iostream>
using namespace std;

int main() {

  int num = 0;
  int d = 5;
  bool isPrime = true;

  cout << "num = ";
  cin >> num;

  isPrime = (num > 1);
  if(num > 2 and num % 2 == 0){
    isPrime = false;
  }
  if(num > 3 and num % 3 == 0){
    isPrime = false;
  }
  while(isPrime and (d*d) <= num){
    if(num % d == 0){
      isPrime = false;
    }
    else if(num %(d + 2) == 0){
      isPrime = false;
    }
    else{
      d = d + 6;
    }
  }
  if(isPrime){
    cout << "Prime\n";
  }
  else{
    cout << "Not Prime\n";
  }
}