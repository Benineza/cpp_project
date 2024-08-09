#include <iostream>
using namespace std;
int main()
{
int dimension;
int length;
int width;
int hypotheneuse;
int base;
int height;
int radius;
const pi=3.14;
cout<<"Enter the dimensions:";
cin>>dimension;
if(dimension==2)
{
	cout<<"Shape: Rectangle"<<endl;
    cout<<"Length:";
cin>>length;
cout<<"Width:";
cin>>width;
cout<<"area of rectangle="<<length*width<<endl;
cout<<"perimeter of rectangle="<<2*(length+width)<<endl;
}
else if(dimension==3)
{
	cout<<"Shape: Triangle"<<endl;
    cout<<"height:";
cin>>height;
cout<<"Base:";
cin>>base;
cout<<"area of triangle="<<(base*height)/2<<endl;
cout<<"hypotheneuse:";
cin>>hypotheneuse;
cout<<"perimeter of triangle="<<hypotheneuse+base+height<<endl;
}
else
{
	cout<<"Shape: Circle"<<endl;
    cout<<"radius:";
cout<<"area of a circle="<<radius*pi<<endl;
cout<<"perimeter of a circle="<<2*pi*radius<<endl;

}


    return 0;
}
