#include "person.h"

Person::Person(const string& ln, const string& addr, const string& phone)
    : lastName(ln), address(addr), phoneNumber(phone) {
}

void Person::show() const {
    cout << "���: �������\n";
    cout << "�������: " << lastName << "\n";
    cout << "������: " << address << "\n";
    cout << "�������: " << phoneNumber << "\n";
}

string Person::getType() const {
    return "�������";
}

// ���������� �������� � ��������
void Person::setLastName(const string& ln) { lastName = ln; }
void Person::setAddress(const string& addr) { address = addr; }
void Person::setPhoneNumber(const string& phone) { phoneNumber = phone; }

string Person::getLastName() const { return lastName; }
string Person::getAddress() const { return address; }
string Person::getPhoneNumber() const { return phoneNumber; }