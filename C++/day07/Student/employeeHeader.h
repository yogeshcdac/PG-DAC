#ifndef EMPLOYEEHEADER_H
#define EMPLOYEEHEADER_H
#include <string>
using namespace std;
class Employee
{
	private:
		int id;
		string name;
		float salary;
	public:
		Employee();
		Employee(int id,string name,float salary);
		float getSalary();
		void accept();
		void display();
};
#endif
