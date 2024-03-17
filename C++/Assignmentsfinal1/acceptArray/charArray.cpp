#include<iostream>
using namespace std;
void acceptElements(char *a, int n);
void printElements(char *a,int n);
void copyElements(char *a, char *b, int n);
int main()
{
	char a[100],b[100];
	int n;
	cout<<"\nEnter the number of elements";
	cin>>n;
	acceptElements(a,n);
	printElements(a,n);
	copyElements(a,b,n);
	printElements(b,n);
}
void acceptElements(char *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter"<<i+1<<"th  character";
		cin>>a[i];
	}
}
void printElements(char *a,int n)
{
	cout<<"\nPrinting Array";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void copyElements(char *a,char *b, int n)
{
	cout<<"\nCopying Character Array";
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
}	
