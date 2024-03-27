#include "Student.h"
#include "Certificate.h"
#include <iostream>
#include "Address.h" // For optional address

int main() {
    // Create a student with name and ID
    std::string studentName;
    int studentId;
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);
    std::cout << "Enter student ID: ";
    std::cin >> studentId;
    std::cin.ignore(); // Consume newline character

    // Optional address (if Address class is included)
    std::optional<Address> studentAddress;
    std::string street, city, state, zipCode;
    std::cout << "\nDo you want to enter student address (y/n)? ";
    char choice;
    std::cin >> choice;
    if (tolower(choice) == 'y') {
        std::cout << "Enter street address: ";
        std::getline(std::cin, street);
        std::cout << "Enter city: ";
        std::getline(std::cin, city);
        std::cout << "Enter state: ";
        std::getline(std::cin, state);
        std::cout << "Enter zip code: ";
        std::getline(std::cin, zipCode);
        studentAddress = Address(street, city, state, zipCode);
    }

    // Create the student object
    Student student(studentName, studentId, studentAddress);

    // Create certificates
    Certificate certificate1(12345, "Java Programming", "Online Academy");
    Certificate certificate2(54321, "Data Structures and Algorithms", "University Course");

    // Add certificates to the student
    student.addCertificate(certificate1);
    student.addCertificate(certificate2);

    // Display student information
    std::cout << "\nStudent Details:\n";
    std::cout << "Name: " << student.getName() << std::endl;
    std::cout << "ID: " << student.getId() << std::endl;

    // Display address if provided
    if (student.getAddress()) {
        const Address& address = student.getAddress().value();
        std::cout << "Address:\n";
        std::cout << address.getStreet() << std::endl;
        std::cout << address.getCity() << ", " << address.getState() << " " << address.getZipCode() << std::endl;
    }

    // Display certificates
    std::cout << "\nCertificates:\n";
    for (const Certificate& certificate : student.certificates) {
        std::cout << " - Certificate Number: " << certificate.getCertificateNumber() << std::endl;
        std::cout << "   Name: " << certificate.getName() << std::endl;
        std::cout << "   Issued By: " << certificate.getIssuedBy() << std::endl;
    }

    return 0;
}

