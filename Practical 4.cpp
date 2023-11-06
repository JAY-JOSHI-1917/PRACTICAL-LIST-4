#include<iostream.h>
using namespace std;

class Example {
public:
	int a;

	void add(Example E)
	{
		Example r_o;
		r_o.a = a + E.a;
		return r_o;
	}
};

int main()
{

	Example E1, E2;
	E1.a = 50;
	E2.a = 100;

	cout << "Initial Values \n";
	cout << "Value of object 1: " << E1.a<< "\n& object 2: " << E2.a
		<<endl;

	E2.add(E1);

	cout << "New values \n";
	cout << "Value of object 1: " << E1.a
		<< "\n& object 2: " << E2.a
		<< "\n\n";

	return 0;
}

