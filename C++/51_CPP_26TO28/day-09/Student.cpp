#include "Student.h"

Student::Student(const std::string& name, int id) : name(name), id(id) {}

Student::Student(const std::string& name, int id, const std::optional<Address>& address)
    : name(name), id(id), address(address) {}

void Student::addCertificate(const Certificate& certificate) {
    certificates.push_back(certificate);
}

