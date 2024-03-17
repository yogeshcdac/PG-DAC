#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a,b,c,d,e,sqrt1,sqrt2;
cout<<"Enter coefficient of  x^2";
cin>>a;
cout<<"Enter coefficient of x";
cin>>b;
cout<<"Enter constant";
cin>>c;
sqrt1=(-b+(sqrt((b*b)-(4*a*c)))/(2*a));
sqrt2=(-b-(sqrt((b*b)-(4*a*c)))/(2*a));
cout<<"Square root 1="<<sqrt1<<endl;
cout<<"Square root 2="<<sqrt2<<endl;
return 0;
}
