#include <iostream>
#include <string>

using namespace std;

class Student 
{
	private:
    	string name;
    	float spi;

	public:
    	void getData()
		 {
        	cout << "Enter student name: ";
        	cin.ignore();
        	getline(cin, name);
        	cout << "Enter SPI: ";
        	cin >> spi;
    	}

    	float getSPI()
		{
        	return spi;
    	}

    	string getName() 
		{
        	return name;
    	}
};

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter data for Student " << (i + 1) << ":\n";
        students[i].getData();
    }

    int highestIndex = 0;
    for (int i = 1; i < numStudents; ++i) {
        if (students[i].getSPI() > students[highestIndex].getSPI()) {
            highestIndex = i;
        }
    }

    cout << "\nStudent with the highest SPI:\n";
    cout << "Name: " << students[highestIndex].getName() << endl;
    cout << "SPI: " << students[highestIndex].getSPI() << endl;

    return 0;
}

