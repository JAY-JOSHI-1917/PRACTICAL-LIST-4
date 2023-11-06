#include <iostream>
using namespace std;
class year {
public:
	int manu_year;
	int expi_year;
	int result;
	void getdata()
	{
		cout<<"Enter manufacturing year ::";
		cin>>manu_year;
		cout<<"Enter expiry year ::";
		cin>>expi_year;
	}
	void putdata(){
		cout<<"Your manufactureing year is ::" <<manu_year<<endl;
		cout<<"Your expiry year is ::" <<expi_year<<endl;
	}
	
	void difference();
}y1,d1;

void year::difference(){
		d1.result=y1.expi_year-y1.manu_year;
		cout<<"Difference between manufacturing and expiry year ::"<<d1.result;
	}
int main()
{
	y1.getdata();
	y1.putdata();
	y1.difference();
	return 0;
}
