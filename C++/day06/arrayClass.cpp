#include<iostream>
using namespace std;

class arr
{
	private:
		int *p;
		int size;

	public:
		arr(int s)
		{

			size=s;
			p=new int[size];
		}

		int getValue(int index)
		{
			return p[index];
		}

		void setValue(int index, int value) 
		{
			p[index]=value;
		}
		 
		~arr()
		{
			cout<<"\n DTOR Called";
			delete []p;
		}
};

int main()
{
 arr a(2);
 a.setValue(0,10);
 a.setValue(1,20);
 cout<<"The value at 1 is"<<a.getValue(0);
 cout<<"The value at 2 is"<<a.getValue(1);
}
