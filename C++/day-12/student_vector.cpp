#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int randomInt(int start, int range) {
    return (start + rand() % range);
}

string randomString(int len) {
    string str;
    for (int i = 0; i < len; i++) {
        char ch = 'A' + rand() % 26;
        str.push_back(ch);
    }
    return str;
}

class Student {
public:
    int roll;
    string name;

   




    void acceptData() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore(); // Clear input buffer for name
        cout << "Enter student name: ";
        getline(cin, name);
    }

   
    void display() {
        cout << roll << "\t" << name << "\t";
    }
};

// Comparison function for sorting students by roll number
bool compareStudents(const Student& s1, const Student& s2) {
    return s1.roll < s2.roll;
}

int main() {

	int size;
	cout<<" enter number of student:: "<<endl;
	cin>>size;
    vector<Student> students(size ); 

    // Generate random data for each student
    for (int i = 0; i < size; i++) {
        students[i].acceptData();
    }

    // Display generated students (unsorted)
    cout << "Generated Students:\n";
    for (int i = 0; i < size; i++) {
        students[i].display();
    }
    cout << endl;

    // Search for student by roll number
    int searchRoll;
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (students[i].roll == searchRoll) {
            cout << "\nStudent found:\n";
            students[i].display();
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "\nStudent with roll number " << searchRoll << " not found.\n";
    }

    // Update name by roll number
    int updateRoll;
    string newName;
    cout << "\nEnter roll number to update name: ";
    cin >> updateRoll;

    found = false;
    for (int i = 0; i < size; i++) {
        if (students[i].roll == updateRoll) {
            cout << "\nEnter new name for student: ";
            cin.ignore(); 
            getline(cin, newName); 
            students[i].name = newName;
            cout << "\nStudent name updated!\n";
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "\nStudent with roll number " << updateRoll << " not found.\n";
    }

        // Sort students by roll number
    sort(students.begin(), students.end(), compareStudents);
 
       // Display students after sorting
    cout << "\nSorted Students by Roll Number:\n";
    for (int i = 0; i < size; i++) {
        students[i].display();
    }
    cout << endl;

    return 0;
}

