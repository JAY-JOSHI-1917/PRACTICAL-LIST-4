#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		Student(int i,string n)
		{
			id=i;
			name=n;
			cout<<"Original constructor :: "<<endl;
			cout<<"Your Id Is :: "<<id<<endl;
			cout<<"Your Name Is :: "<<name<<endl<<endl;
		}
		Student(Student &s1)
		{
			int id=s1.id;
			string name=s1.name;
			cout<<"Copy Constructor :: "<<endl;
			cout<<"Your Id Is :: "<<id<<endl;
			cout<<"Your Name Is :: "<<name;
		}
};
int main()
{
	Student s1(106,"Jay");
	Student s2(s1);
	return 0;
}
