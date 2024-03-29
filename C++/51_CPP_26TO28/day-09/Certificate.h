#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include <string>

class Certificate {
public:
    Certificate(int certificateNumber, const std::string& name, const std::string& issuedBy);

    int getCertificateNumber() const { return certificateNumber; }
    std::string getName() const { return name; }
    std::string getIssuedBy() const { return issuedBy; }

private:
    int certificateNumber;
    std::string name;
    std::string issuedBy;
};

#endif

