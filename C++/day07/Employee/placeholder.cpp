
#include<iostream>
using namespace std;

void add(int a,int b, int);
void add(int a,int b);
int main()
{
	int a,b,c;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	cout<<"Enter c";
	cin>>c;
	add(a,b);
	add(a,b,c);
}

void add(int a,int b, int)
{
cout<<"\n sum1="<<a+b;
}

void add(int a,int b)
{
cout<<"\n sum2="<<a+b;
}

