#include <iostream>
using namespace std;

bool isPrime(int n){
  bool isPrime =true;
  int i = 3;
  if(n > 2){
    if(n % 2 == 0 ){
      isPrime = false;
    }
    else{
      while(i * n <= n * n){
        if(n / i == 0){
          isPrime = false;
        }
        i++;
      }
    }    
  }
  return isPrime;
}

int main() {
  int x = 2137;

  if(isPrime(x)){
    cout << x << " Prime\n";
  }
  else{
    cout << x << " Not Prime\n";
  }
}