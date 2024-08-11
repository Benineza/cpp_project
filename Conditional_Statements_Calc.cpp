#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int num1;
    int num2;
    int operation;
   cout<<"Addition: 1"<<endl;
   cout<<"Substraction: 2"<<endl;
   cout<<"Multiplication: 3"<<endl;
   cout<<"Division: 4"<<endl;
   cout<<"Enter 1st number:";
   cin>>num1;
    cout<<"Enter 2nd number:";
    cin>>num2;
   cout<<"Enter number representing desired operation:";
   cin>>operation;
   if(operation==1)
   {
       cout<<"Sum:"<<num1+num2;
   }
   else if(operation==2)
   {
       cout<<"Difference:"<<num1-num2;
   }
   else if(operation==3)
   {
       cout<<"Product:"<<num1*num2;
   }
   else
   {
       cout<<"Quotient:"<<num1/num2;
   }
    return 0;
}
