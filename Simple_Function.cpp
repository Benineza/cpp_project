#include<iostream>
using namespace std;
// we were asked to use function in a program
//function declarartion
int Add(int a,int b)
{
	return a+b;
}
int main()
{
	int result=Add(4,5);
	cout<<"the sum of two numbers :"<<result;
}
