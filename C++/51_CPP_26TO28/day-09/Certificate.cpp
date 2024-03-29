#include "Certificate.h"

Certificate::Certificate(int certificateNumber, const std::string& name, const std::string& issuedBy)
    : certificateNumber(certificateNumber), name(name), issuedBy(issuedBy) {}

