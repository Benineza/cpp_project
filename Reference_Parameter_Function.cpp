#include <iostream>
using namespace std;
void swap(int &a, int&b)
{
int temp=a;
a=b;
b=temp;}

int main(){
	int x=7;
	int y=9;
	
	cout<<"x before swap:"<<x<<"\t""y before swap:""\t"<<y<<endl;
	swap(x,y);
	cout<<"x after swap:"<<x<<"\t""y after swap:""\t"<<y<<endl;
}
