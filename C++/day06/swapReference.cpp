#include<iostream>
using namespace std;

void swap(int &r, int &c);
int main()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"\n Swapped \na="<<a<<"\nb="<<b<<endl;
}
void swap(int &r, int &c)
{
	int temp;
	temp=r;
	r=c;
	c=temp;
}
