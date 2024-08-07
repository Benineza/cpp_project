#include <iostream>
using namespace std;
int main()
{
int dimension;
int dimension2;
int length;
int width;
int side;
int base;
int height;
int radius;
cout<<"Enter the dimensions:";
cin>>dimension;
if(dimension==2)
{
    cout<<"Length:";
cin>>length;
cout<<"Width:";
cin>>width;
cout<<"area of rectangle="<<length*width<<endl;
cout<<"perimeter of rectangle="<<2*(length+width)<<endl;
}
else if(dimension==3)
{
    cout<<"height:";
cin>>height;
cout<<"area of triangle="<<(base*height)/2<<endl;
cout<<"side:";
cin>>side;
cout<<"perimeter of triangle="<<side*3<<endl;
}
else
{
    cout<<"radius:";
cout<<"area of a circle="<<radius*3.14<<endl;
cout<<"perimeter of a circle="<<2*3.14*radius<<endl;

}


    return 0;
}
