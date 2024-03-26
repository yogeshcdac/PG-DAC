#include<iostream>
using namespace std;



class MyArray {
private:
    int* data; // Pointer to the actual array
    int size;  // Size of the array

public:
    // Constructor
    MyArray(int n) : size(n) {
        data = new int[size];
    }

    // Destructor (don't forget to delete[] data)

    // Overload the assignment operator
    MyArray& operator=(const MyArray& other) {
        if (this != &other) { // Check for self-assignment
            delete[] data; // Clean up existing data
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }


int& operator
{
        if (index >= 0 && index < size) {
            return data[index];
        }
        // Handle out-of-bounds index (you can throw an exception or handle it differently)
        // For simplicity, let's return the first element
        return data[0];
}

};
int main() {
    MyArray arr1(5);
    MyArray arr2(5);
    arr1 = arr2;
    arr1 [2] = 42; 
    int value = arr1[2];
    cout << "Value at index 2: " << value <<endl;
    return 0;
}
