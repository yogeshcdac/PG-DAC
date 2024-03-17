#include<string>
using namespace std;

class Student
{
	int rollNo;
	int marks;
	string name;

public:
	void accept();
	void display();
	int getMarks();
};

void SortByMarks(Student*, int);
