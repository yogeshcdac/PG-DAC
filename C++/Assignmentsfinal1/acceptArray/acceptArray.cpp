#include<iostream>
using namespace std;
void acceptArray(int *a,int n);
void printArray(int *a,int n);
void sortArray(int *a,int n);
int main()
{
	int arr[100],n;
	cout<<"Enter number of elements";
	cin>>n;
	acceptArray(arr,n);
	sortArray(arr,n);
	printArray(arr,n);
}

void acceptArray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i+1<<"th  Element";
		cin>>a[i];
	}
}

void printArray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<i<<"th Element is"<<a[i];
	}
}
void sortArray(int *a,int n)
{
	int i,t,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}	
	}
}
