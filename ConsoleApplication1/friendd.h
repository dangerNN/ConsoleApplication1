#pragma once
#include "contact.h"

    class Friend : public Contact {
    private:
        string lastName;
        string address;
        string phoneNumber;
        string birthDate;

    public:
        Friend(const string& ln, const string& addr, const string& phone, const string& bd);
        void show() const override;
        string getType() const override;
        void setLastName(const string& ln);
        void setAddress(const string& addr);
        void setPhoneNumber(const string& phone);
        void setBirthDate(const string& bd);
        string getLastName() const;
        string getAddress() const;
        string getPhoneNumber() const;
        string getBirthDate() const;
};