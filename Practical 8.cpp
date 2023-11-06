#include<iostream>
using namespace std;

class get{
	private:
		int number1,number2,result;
	public:
		get(){
		cout<<"Enter your first number :";
		cin>>number1;
		cout<<"Enter your second number :";
		cin>>number2;
		result=number1+number2;
		}	
		friend class f;	
};
class f{
	public:
	void display(get& g){
		cout<<"Your sum of given number ::"<<g.result;
}
};

int main()
{
	get g;
	f fri;
	fri.display(g);
	return 0;
}
