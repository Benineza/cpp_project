#include <iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int substract(int a, int b)
{
	return a-b;
}
int main()
{
	
	int number1;
	int number2;
	cout<<"Enter first number:";
	cin>>number1;
    cout<<"Enter second number:";
	cin>>number2;
    int result=add(number1,number2);
	int difference=substract(number1,number2);
	cout<<"The sum of two numbers:"<<result<<endl;
	cout<<"The difference of two numbers:"<<difference;
	return 0;
	
	
}

