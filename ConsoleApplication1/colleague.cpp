#include "colleague.h"

Colleague::Colleague(const string& comp, const string& addr, const string& phone,
    const string& f, const string& cp)
    : company(comp), address(addr), phoneNumber(phone), fax(f), contactPerson(cp) {
}

void Colleague::show() const {
    cout << "���: ������\n";
    cout << "����������: " << company << "\n";
    cout << "������: " << address << "\n";
    cout << "�������: " << phoneNumber << "\n";
    cout << "����: " << fax << "\n";
    cout << "��������� �����: " << contactPerson << "\n";
}

string Colleague::getType() const {
    return "������";
}

void Colleague::setCompany(const string& comp) { company = comp; }
void Colleague::setAddress(const string& addr) { address = addr; }
void Colleague::setPhoneNumber(const string& phone) { phoneNumber = phone; }
void Colleague::setFax(const string& f) { fax = f; }
void Colleague::setContactPerson(const string& cp) { contactPerson = cp; }

string Colleague::getCompany() const { return company; }
string Colleague::getAddress() const { return address; }
string Colleague::getPhoneNumber() const { return phoneNumber; }
string Colleague::getFax() const { return fax; }
string Colleague::getContactPerson() const { return contactPerson; }