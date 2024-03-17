#include<iostream>
using namespace std;

int main()
{
int num,arr[10],i;
cout<<"Enter the number to convert";
cin>>num;

for(i=0;num>0;i++)
{
	arr[i]=num%2;
	num=num/2;	
}

for(i=i-1;i>=0;i--)
{
	cout<<arr[i];
}

}
