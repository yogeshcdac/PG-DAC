#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
	int empId;
	string name;
	int salary;
	static int cnt;

	public:
	Employee()
	{
		empId=0;
		name="NIL";
		salary=0;
		cnt++;//add count inside constructors so that it is accessible by the class by default
	}
	Employee(int id,string nom,int sal)
	{
		empId=id;
		salary=sal;
		name=nom;
		cnt++;
	}
	void accept()
	{
		cout<<"\nEnter the Name of the Employee";
		cin>>name;
		cout<<"\nEnter the Employee ID";
		cin>>empId;
		cout<<"\nEnter the salary";
		cin>>salary;
	}
	void display()
	{
		cout<<"\nDisplaying Details of"<<this;
		cout<<"\nName::"<<this->name;
		cout<<"\nEmployee ID="<<this->empId;
		cout<<"\nSalary="<<this->salary;
	}
        static void showCount();
};
void Employee::showCount()
{
cout<<"\nThe Number Of Employees"<<cnt<<endl;
}


int Employee::cnt=0;//should be written in CPP file and not in the other files

int main()
{
	Employee e1,e2,e3;
	e1.accept();
	e1.display();
	e2.accept();
	e2.display();
	e3.accept();
	e3.display();
	Employee::showCount();
	return 0;
}


