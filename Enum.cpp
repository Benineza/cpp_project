#include <iostream>
using namespace std;

enum weekday{Sunday=0,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main()
{
	// great job
	int day;
	cout<<"Enter the number 0-6 corresonding to get the day:";
	cin>>day;
	switch (day)
	{
		case Sunday:cout<<"Sunday"<<endl;break;
		case Monday:cout<<"Monday"<<endl;break;
		case Tuesday:cout<<"Tuesday"<<endl;break;
		case Wednesday:cout<<"Wednesday"<<endl;break;
		case Thursday:cout<<"Thursday"<<endl;break;
		case Friday:cout<<"Friday"<<endl;break;
		case Saturday:cout<<"Saturday"<<endl;break;
		default: cout<<"inavlid day";//remember to control the user's input
		
	}
}

