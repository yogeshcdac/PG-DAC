#include<iostream>
using namespace std;

class Employee
{
	private:
	int empId;
	float salary;
	string name;

	public:
	void accept()
	{
		cout<<"\nEnter the Name of the Employee";
		cin>>name;
		cout<<"\nEnter the Employee ID";
		cin>>empId;
		cout<<"\nEnter the salary";
		cin>>salary;
	}
	const void display()
	{
		cout<<"\n EmpId::"<<empId<<" Name:"<<name<<" Salary="<<salary<<endl;
	}
	Employee()
	{
		empId=0;
		salary=0;
		name="Not Present";
	}
	//Constructor Overloading
	Employee(int empId, float salary, string name )
	{
		this->empId=empId;
		this->salary=salary;
		this->name=name
	}

	//Copy Constructor
	Employee(const Employee& e1)
	{
		cout<<"aaaaaaaaaaaaaaaaa"<<endl;
		this->name=e1.name;
		this->salary=e1.salary;
		this->empId=e1.empId;
	}
};


int main()
{
	int id,i;
	float sal;
	string nom;
	int num;
	cout<<"\n Enter number of Employees";
	cin>>num;
	Employee e_arr[num];
	for(i=0;i<num;i++)
{
	e_arr[i].accept();
}
	for(i=0;i<num;i++)
{
	e_arr[i].display();
}

	Employee e3(e_arr[1]);
	e3.display();
}
