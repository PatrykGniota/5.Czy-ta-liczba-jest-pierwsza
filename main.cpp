#include <iostream>
using namespace std;

bool isPrime(int num){
  int d = 5;
  bool isPrime = true;

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
  return isPrime;
}

void twinPrime(int num){
  int licznik = 1;
  int x = 5;
  cout << 3 << " " << 5 << endl;
  while(licznik < num){
    if(isPrime(x) && isPrime(x + 2)){
      cout << x << " " << x + 2 << endl;
      licznik++;
    }
    x += 6;
  }
}

int main() {

  int num = 0;
  cin >> num;
  twinPrime(num);
  
  
}