#include<iostream>
#include<string>
#include"student.h"
using namespace std;

void Student::accept()
{
cout<<"\nEnter the Details";
cin>>rollNo;
cin.get();
getline(cin,name);
cin>>marks;
}
void Student::display()
{
cout<<"\nName:"<<name<<"\tRoll Number:"<<rollNo<<"\tMarks"<<marks<<endl; 
}
int Student::getMarks()
{
return marks;
}
