#include <iostream>
using namespace std;
//great job
struct School
{
	string name;
	string principal;
	int fees;
};
int main()
{
School S1;
S1.name="Havard University";
S1.principal="Williams";
S1.fees=4000;
cout<<"the name of the school is:"<<S1.name<<endl;
cout<<"the principal of the school is:"<<S1.principal<<endl;
cout<<"the fees of the school are:"<<S1.fees;
}
