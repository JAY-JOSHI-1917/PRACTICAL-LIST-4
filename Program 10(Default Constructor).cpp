#include<iostream>
using namespace std;
class Student
{
	private:
		int id=106;
		string name={"Jay"};
	public:
		Student()
		{
			cout<<"Your Id Is :: "<<id<<endl;
			cout<<"Your Name Is :: "<<name;
		}
};
int main()
{
	Student s1;
	return 0;
}
