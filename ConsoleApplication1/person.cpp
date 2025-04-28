#include "person.h"

Person::Person(const string& ln, const string& addr, const string& phone)
    : lastName(ln), address(addr), phoneNumber(phone) {
}

void Person::show() const {
    cout << "Тип: Персона\n";
    cout << "Прізвище: " << lastName << "\n";
    cout << "Адреса: " << address << "\n";
    cout << "Телефон: " << phoneNumber << "\n";
}

string Person::getType() const {
    return "Персона";
}

// Реализация геттеров и сеттеров
void Person::setLastName(const string& ln) { lastName = ln; }
void Person::setAddress(const string& addr) { address = addr; }
void Person::setPhoneNumber(const string& phone) { phoneNumber = phone; }

string Person::getLastName() const { return lastName; }
string Person::getAddress() const { return address; }
string Person::getPhoneNumber() const { return phoneNumber; }