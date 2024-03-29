#include <iostream>
using namespace std;
     

class MyArray {
private:
    int* data; 
    int size; 

public:
    
    MyArray(int n) : size(n) {
        data = new int[size];
    }

    

    // Overload the assignment operator
    MyArray& operator=(const MyArray& other) {
        if (this != &other)
	{ 
            delete[] data; 
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    // Overload the subscript operator
    int& operator[] ( int index)
    {
        if (index >= 0 && index < size) {
            return data[index];
        }
      
     
        return data[0];
    }

   
    void print() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout <<endl;
   }
// overload comparison oprator
     bool operator==(const MyArray& other) const {
        if (size != other.size)
            return false;

         for (int i = 0; i < size; ++i) {
             if (data[i] != other.data[i])
                 return false;
      }

      return true;
    }
  };

int main() {
    MyArray arr1(5);
    MyArray arr2(5);

  
    arr1 = arr2;

    for (int i = 0; i < 5; ++i) {
        arr2[i] = i * 10;
    }

    cout << "arr1: ";
    arr1.print(); 

    cout << "arr2: ";
    arr2.print(); 



if (arr1 == arr2) {
    cout << "Arrays are equal." << endl;
} else {
    cout << "Arrays are not equal." << endl;
}
    return 0;
}
