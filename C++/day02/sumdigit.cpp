#include<iostream>
using namespace std;

int sumdigits(int b);
int main()
{
	int a,sum=0;
	cout<<"Enter a number";
	cin>>a;
	sum=sumdigits(a);
	cout<<"The sum of digits is"<<sum;
	return 0;
}
int sumdigits(int b)
{
	int sum1=0,c;
	while(b>0)//b=1343
	{
		c=b%10;//c=1343%10 i.e c=3 sum1=0	//// b=134 c=b%10; c=4 sum1=3  		////b=13 c=b%10; c=3 sum1=7 //// b=1 c=b%10=1 sum1=10
		sum1=sum1+c;//sum1=0+c=0+3=3 sum1=3//		////sum1=3+4=7		////    sum1=7+3=10 //// sum1=10+1=11
		b=b/10;//b=1343 so we do b==b/10 i.e b=1343/10=134	//// b=134/10 b=13 	////b=13/10 b=1 //// b=1/10 b=0 //11
	}
	return(sum1);	
}
