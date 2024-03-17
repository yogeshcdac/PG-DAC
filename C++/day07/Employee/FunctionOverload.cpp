#include<iostream>
using namespace std;

void swap(int a,int b);
void swap(float q, float r);
int main()
{
	int a,b;
	float q,r;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	cout<<"Enter q";
	cin>>q;
	cout<<"Enter r";
	cin>>r;
	swap(a,b);
	swap(q,r);
}

void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"\n a="<<a<<"\n b="<<b;
}
void swap(float q,float r)
{
float temp;
temp=r;
r=q;
q=temp;
cout<<"\n q="<<q<<"\n r="<<r;
}

