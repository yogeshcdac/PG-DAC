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
  cout << "Enter number of students: ";
  cin >> size;
  vector<Student> students(size);

  // Generate random data for each student (using iterator)
  auto it = students.begin();
  while (it != students.end()) {
    it->acceptData();
    ++it;
  }

  // Display generated students (unsorted)
  cout << "Generated Students:\n";
  it = students.begin();
  while (it != students.end()) {
    it->display();
    ++it;
  }
  cout << endl;

  // Search for student by roll number (using iterator)
  int searchRoll;
  cout << "\nEnter roll number to search: ";
  cin >> searchRoll;

  bool found = false;
  it = students.begin();
  while (it != students.end()) {
    if (it->roll == searchRoll) {
      cout << "\nStudent found:\n";
      it->display();
      found = true;
      break;
    }
    ++it;
  }

  if (!found) {
    cout << "\nStudent with roll number " << searchRoll << " not found.\n";
  }

  // Update name by roll number (using iterator)
  int updateRoll;
  string newName;
  cout << "\nEnter roll number to update name: ";
  cin >> updateRoll;

  found = false;
  it = students.begin();
  while (it != students.end()) {
    if (it->roll == updateRoll) {
      cout << "\nEnter new name for student: ";
      cin.ignore();
      getline(cin, newName);
      it->name = newName;
      cout << "\nStudent name updated!\n";
      found = true;
      break;
    }
    ++it;
  }

  if (!found) {
    cout << "\nStudent with roll number " << updateRoll << " not found.\n";
  }

  // Sort students by roll number
  sort(students.begin(), students.end(), compareStudents);

  // Display students after sorting (using iterator)
  cout << "\nSorted Students by Roll Number:\n";
  it = students.begin();
  while (it != students.end()) {
    it->display();
    ++it;
  }
  cout << endl;

  return 0;
}

