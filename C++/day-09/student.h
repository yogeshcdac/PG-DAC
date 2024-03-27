#ifndef STUDENT_H
#define STUDENT_H

#include "Certificate.h"
#include <optional> // For optional address

class Student {
public:
    Student(const std::string& name, int id); // Basic constructor

    // Optional constructor with address (if Address class is included)
    Student(const std::string& name, int id, const std::optional<Address>& address = std::nullopt);

    void addCertificate(const Certificate& certificate);

    std::string getName() const { return name; }
    int getId() const { return id; }

    // Accessor for address (if Address class is included)
    const std::optional<Address>& getAddress() const { return address; }

private:
    std::string name;
    int id;
    std::vector<Certificate> certificates;
    std::optional<Address> address; // Optional member for address
};

#endif

