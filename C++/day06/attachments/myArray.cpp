#include<iostream>
#include<string>
using namespace std;

class MyArray
{
	private:
		int n;
		string *a;
	public:
		MyArray(int n)
		{
			cout<<"CTOR is called"<<endl;
			this->n=n;
			a=new string[n];
		}
		void setAtIndex(int ind, string val)
		{
			a[ind]=val;
		}
		string getAtIndex(int ind)
		{
			return a[ind];
		}
		~ MyArray()
		{
			cout<<"DTOR is called"<<endl;
			delete [] a;
		}
};

int main()
{
	int num;
        string name;
	cout<<"Enter size : ";
	cin>>num;
	MyArray a(num);
	cout<<"Enter names : "<<endl;
	for(int i=0; i<num; i++)
	{
		cin>>name;
		a.setAtIndex(i, name);
	}
	cout<<"\nEntered names :"<<endl;
	for(int i=0; i<num; i++)
		cout<<a.getAtIndex(i)<<endl;
	return 0;
}
