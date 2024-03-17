#include<iostream>
using namespace std;
void accept(int a[3][3]);
void display(int a[3][3]);
int multiply(int a[3][3],int b[3][3]);
int main()
{
	int a[3][3],b[3][3],c[3][3];
	cout<<"\nEnter the values for first matrix";
	void accept(a[3][3]);
	cout<<"\nEnter the values for the second matrix";
	void accept(b[3][3]);
	cout<<"Displaying First Matrix";
	void display(a[3][3]);
	cout<<"\nDisplaying Second Matrix";
	void display(b[3][3]);
	cout<<"\nMultiplying both matrices";
	c[3][3]=int multiply(int *a[][],int *b[][]);
	void display(c[3][3]);
}
void accept(int a[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j=3;j++)
		{
			cout<<"Enter element at ["<<i<<"]["<<j<<"]";
			cin>>a[i][j];
		}
	}
}


void display(int a[3][3])
{
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			cout<<"The element at ["<<i<<"]["<<j<<"] is"<<a[i][j];
		}
	}
}


int  multiply(int a[3][3],int b[3][3])
{
	int c[3][3],tot=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
			tot=tot+a[i][k]+b[k][j}
			}
		c[i][j]=tot;
		tot=0;
		}
	}
	return c[3][3];
}
