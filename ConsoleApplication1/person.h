#pragma once
#include "contact.h"

    class Person : public Contact {
    private:
        string lastName;
        string address;
        string phoneNumber;

    public:
        Person(const string& ln, const string& addr, const string& phone);
        void show() const override;
        string getType() const override;
        void setLastName(const string& ln);
        void setAddress(const string& addr);
        void setPhoneNumber(const string& phone);
        string getLastName() const;
        string getAddress() const;
        string getPhoneNumber() const;
};