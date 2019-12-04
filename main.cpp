#include <iostream>
#include <string>

using namespace std;

int factorialR(int n);

int main() {
  int num;

  cout << "enter an integer: ";
  cin >> num;
  
  cout << "\nfactorial: " << factorialR(num);
}

int factorialR(int n){
  if (n > 0){
    return n*factorialR(n-1);
  } else
  return 1;
}