#include"Student.h"
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char fname[100];
	cout<<"\n Enter filename:";
	cin>>fname;
	ofstream fout(fname,ios::app|ios::binary);
	if(!fout)
	{
		cout<<"\n File Not found";
		return -1;
	}
  	char ch;
        int numStudents;

       cout << "Enter the number of students to add: ";
       cin >> numStudents;
       cin.get(); // Consume newline character

          for (int cnt = 0; cnt < numStudents; cnt++) {
       	 Student s;
         s.Accept();
         fout.write((char*)&s, sizeof(Student));
    }

    cout << numStudents << " student(s) added successfully!" << endl;

	
	fout.close();
	return 0;
}
