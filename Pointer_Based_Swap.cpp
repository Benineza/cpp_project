#include <iostream>
using namespace std;
void swap(int &a, int&b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main() 
{
	int x;
	int y;
	cout<<"Enter first number:";
	cin>>x;
	cout<<"Enter second number:";
	cin>>y;
	cout<<"X before swap:"<<x<<"\t""and Y:""\t"<<y<<endl;
	swap(x,y);
	cout<<"X after swap:"<<x<<"\t""and Y:""\t"<<y<<endl;
}
	
