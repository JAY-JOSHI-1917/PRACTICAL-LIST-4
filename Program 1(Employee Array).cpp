#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		char name[20];
	public:
		getdata()
		{
			cout<<"Enter The Id Number Of Employee :: ";
			cin>>id;
			cout<<"   Enter The Name Of Employee :: ";
			cin>>name;
		}
		putdata()
		{
			cout<<"Employee Id :: "<<id<<endl;
			cout<<"   Employee Name :: "<<name<<endl;
		}
};
int main()
{
	Employee emp[10];
	int i;
	cout<<"Enter The Following Details For 10 Employees."<<endl<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<i<<". ";
		emp[i].getdata();
	}
	cout<<endl<<"Check The Details :: "<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<i<<". ";
		emp[i].putdata();
	}
	return 0;
}
