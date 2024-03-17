#include "utils.h"
#include<iostream>
int main()
{
	Employee e1;
	e1.display();
	Employee e2(1,"isha",34000);
	e2.display();
	int num;
	cout<<"Enter number of employees : ";
	cin>>num;
	Employee e_arr[num];
	for(int i=0;i<num;i++)
		e_arr[i].accept();
	sortBySalary(e_arr, num);
	for(int i=0;i<num;i++)
		e_arr[i].display();
	return 0;
}
