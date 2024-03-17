#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}	

int main()
{
	int a,b;
	cout<<"Enter 2 no. :";
	cin>>a>>b;
	swap(a,b);
	cout<<"swapped"<<endl<<a<<"\t"<<b<<endl;
	return 0;
}
