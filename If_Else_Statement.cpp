#include <iostream>
using namespace std;
int main() 
{
	int number= -1;
	cout<<"Enter number:"<<endl;
	cin>>number;
	if(number<0)
	{
		cout<<"Negative number";
	}
	else if(number>0)
	{
		cout<<"Positive number";
	}
	else
	{
		cout<<"Number is zero";
		
	}

	return 0;
}
