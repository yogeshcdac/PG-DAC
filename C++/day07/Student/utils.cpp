#include"utils.h"
#include<iostream>
void sortBySalary(Employee *e,int n)
{
	cout<<"\nEmployees sorted by salary :"<<endl;
	for(int i=0; i<n; i++)
		for(int j=i+1;j<n;j++)
			if(e[i].getSalary()>e[j].getSalary())
			{
				Employee temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
}
