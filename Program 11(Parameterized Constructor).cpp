#include<iostream>
using namespace std;
class Student
{
	public:
		Student(int id,string name)
		{
			cout<<"Your Id Is :: "<<id<<endl;
			cout<<"Your Name Is :: "<<name;
		}
};
int main()
{
	Student s1(106,"Jay");
	return 0;
}
