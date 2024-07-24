#include <iostream>
using namespace std;

int mysum(int num1=2, int num2=6) 
{
  return num1+num2;
}

int main() {
  cout << mysum(2+6);
  return 0;
}

