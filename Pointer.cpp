#include <iostream>
using namespace std;
int main()
{
	int number =10;
	//pointer is missing
	//this is how we declare a pointer in cpp
	int*ptr =&number;
	*ptr=number;
    cout<<ptr<<endl; //this will output the memory address of the variable 
   cout<<*ptr;//this will output the value of the variable number


   
}
