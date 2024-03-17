#include<iostream>
using namespace std;                                                                                                                                                                                       int sum1=0;                                                                                                                                                                                                                                                                                                                                                                                         
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
	int c; //b=1343
        c=b%10;//c=3
  	sum1=sum1+c;//sum1=3
        b=b/10;//b=134 sum1=3


	if(b>0)
	sumdigits(b);//call1

        return(sum1);
}                                                                                                                                                                                                         
                                                                                                                                                                                                          
                                                                                                                                                                                                          
                                                                                                                                                                                                                                     
