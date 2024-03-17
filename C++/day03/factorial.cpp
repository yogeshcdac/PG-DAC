#include<iostream>
using namespace std;
int fact(int a);
int main()
{
	int a,b;
	cout<<"Enter a number";
	cin>>a;
	b=fact(a);
	cout<<"The factorial is "<<b;
}
int fact(int b)
{
int factNo=1;
for(int i=1;i<=b;i++)
{
factNo=factNo*i;
cout<<factNo<<"\t";
}
return factNo;
}
