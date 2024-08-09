#include <iostream>
using namespace std;
int main()
{
	double number1;
	double number2;
	char operation;
switch (operation) {
  case 1: 
  
  	cout<<"Sum of two numbers"<<endl;
    cout<<"Enter first number:";
	cin>>number1;
	cout<<"Enter second number:";
	cin>>number2;
	cout<<"Sum:"<<number1+number2<<endl;
    break;
	
	case 2:
	cout<<"Difference of two numbers"<<endl;
	cout<<"Enter first number:";
	cin>>number1;
	cout<<"Enter second number:";
	cin>>number2;
	cout<<"difference:"<<number1-number2<<endl;
	
	case 3:
	cout<<"Product of two numbers"<<endl;
	cout<<"Enter first number:";
	cin>>number1;
	cout<<"Enter second number:";
	cin>>number2;
	cout<<"product:"<<number1*number2<<endl;
	
	case 4:
		cout<<"Quotient of two numbers"<<endl;
	cout<<"Enter first number:";
	cin>>number1;
	cout<<"Enter second number:";
	cin>>number2;
	cout<<"quotient:"<<number1/number2;

}


