#include <iostream>
using namespace std;
int swap(int &a, int&b)
{
int temp=a;
	a=b;
	b=temp
	}
int main()
{
	int a=4;
	int b=5;
	cout<<"Number before swap:"<<a<<endl;
	cout<<"Number before swap:"<<b<<endl;

swap(a,b);
cout<<"Number after swap:"<<a<<endl;
cout<<"Number after swap:"<<b;
}
