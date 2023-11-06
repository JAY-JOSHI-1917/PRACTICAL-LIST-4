#include<iostream>
using namespace std;
class Student
{
		private:
			static int id;
			string name;
		public:
			static void getdata()
			{
				cout<<"Enter Your ID :: ";
				cin>>id;
				
				cout<<endl<<"Enter Your Name :: ";
				cin.ignore();
				getline(cin,name);
			}
			static void putdata()
			{
				cout<<"Your Id Is :: "<<id<<endl<<"Your Name Is :: "<<name;
			}
};
int Student::id;
int main()
{
	Student s1;
	Student::getdata();
	Student::putdata();
	return 0;
}
