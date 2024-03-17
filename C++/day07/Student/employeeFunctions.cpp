#include<iostream>
#include"employeeHeader.h"
Employee::Employee()
{
	id=0;
	name="";
	salary=0;
}
Employee::Employee(int id,string name,float salary)
{
	this->id=id;
	this->name=name;
	this->salary=salary;
}
float Employee::getSalary()
{
	return salary;
}
void Employee::accept()
{
	cout<<"Enter id, name and salary"<<endl;
	cin>>id;
	cin.get();
	getline(cin,name);
	cin>>salary;
}
void Employee::display()
{
	cout<<"id\t"<<id<<"\tname\t"<<name<<"\tsalary\t"<<salary<<endl;
}

