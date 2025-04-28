#include "friendd.h"

Friend::Friend(const string& ln, const string& addr, const string& phone, const string& bd)
    : lastName(ln), address(addr), phoneNumber(phone), birthDate(bd) {
}

void Friend::show() const {
    cout << "Тип: Друг\n";
    cout << "Прізвище: " << lastName << "\n";
    cout << "Адреса: " << address << "\n";
    cout << "Телефон: " << phoneNumber << "\n";
    cout << "Дата народження: " << birthDate << "\n";
}

string Friend::getType() const {
    return "Друг";
}

void Friend::setLastName(const string& ln) { lastName = ln; }
void Friend::setAddress(const string& addr) { address = addr; }
void Friend::setPhoneNumber(const string& phone) { phoneNumber = phone; }
void Friend::setBirthDate(const string& bd) { birthDate = bd; }

string Friend::getLastName() const { return lastName; }
string Friend::getAddress() const { return address; }
string Friend::getPhoneNumber() const { return phoneNumber; }
string Friend::getBirthDate() const { return birthDate; }