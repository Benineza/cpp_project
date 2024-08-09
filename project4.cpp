#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int CN; //CN for Currency Number
    int amount;
    cout<<"USD:1 / For United States Dollars"<<endl;
    cout<<"RWF:2 /For Rwandan Francs"<<endl;
    cout<<"Enter digit (1/2) to select which currency is to be convertedto the other:";
    cin>>CN;
    

if(CN=1)
{
    cout<<"Amount:"; //In USD
    cin>>amount;
    cout<<"Converted currency is:"<<amount*1319.50<<endl;
    cout<<"conversion of currency from USD to RFW";
}
else
{
    cout<<"Amount:"; //In rwandan francs
    cin>>amount; 
    cout<<"Converted currency:"<<amount/1319.50<<endl;
    cout<<"conversion of currency from RFW to USD";
}


    return 0;
}
