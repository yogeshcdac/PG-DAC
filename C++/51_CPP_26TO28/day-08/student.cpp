#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string name;
    int rollNumber;

public:
    // Constructor
    Student(const string& n = "", int roll = 0) : name(n), rollNumber(roll) {}

    // Overload the insertion operator (<<)
    friend ostream& operator<<(ostream& out, const Student& student) {
        out << "Name: " << student.name << ", Roll Number: " << student.rollNumber;
        return out;
    }

    // Overload the extraction operator (>>)
    friend istream& operator>>(istream& in, Student& student) {
        cout << "Enter student name: ";
        in >> student.name;
        cout << "Enter roll number: ";
        in >> student.rollNumber;
        return in;
    }
};

int main() {
    Student s1;
    cout << "Enter details for a student:\n";
    cin >> s1;

    cout << "\nStudent details:\n" << s1 <<endl;

    return 0;
}
