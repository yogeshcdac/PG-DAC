#include<iostream>
#include"student.h"
#include<string>
using namespace std;

int main()
{
int i,n;
Student arr[50];
cout<<"Enter number of students";
cin>>n;
for(i=0;i<n;i++)
	{
	arr[i].accept();
	}
for(i=0;i<n;i++)
	{
	arr[i].display();
	}
SortByMarks(arr, n);

for(i=0;i<n;i++)
	{
	arr[i].display();
	}
return 0;
}

void SortByMarks(Student *arr, int n)
{
Student temp;
int i,j;
for(i=0;i<n-1;i++)
	{
	for(j=0;j<n;j++)
	{

	if(arr[i].getMarks()>arr[j].getMarks())
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}

	}
}
}

