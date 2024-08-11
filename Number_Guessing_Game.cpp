#include <iostream>
using namespace std;
int main() 
{
    int num;
    string hint;
    cout<<"GUESSING GAME: Guessing a number from 1-100"<<endl;
    cout<<"Enter a number from 1 to 100:";
    cin>>num;
    if(0<num>49)
    {
        cout<<"Too low. Try again.";
    }
    cin>>num;
    if(60<=num>=100)
    {
        cout<<"Too high. Try again.";
    }
    if(num>=100)
    {
        cout<<"Number out of bounds. Try again";
    }
    cin>>num;
    if(50<=num>=60)
    {
        cout<<"Almost there. Keep trying.";
    }
    cin>>num;
    
    if(num==55)
    {
        cout<<"Correct!";
    }
    else
    {
        cout<<"Not correct. Keep trying.";
    }
    return 0;
}
