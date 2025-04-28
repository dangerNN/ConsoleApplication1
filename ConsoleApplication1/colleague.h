#pragma once
#include "contact.h"

    class Colleague : public Contact {
    private:
        string company;
        string address;
        string phoneNumber;
        string fax;
        string contactPerson;

    public:
        Colleague(const string& comp, const string& addr, const string& phone, const string& f, const string& cp);
        void show() const override;
        string getType() const override;
        void setCompany(const string& comp);
        void setAddress(const string& addr);
        void setPhoneNumber(const string& phone);
        void setFax(const string& f);
        void setContactPerson(const string& cp);
        string getCompany() const;
        string getAddress() const;
        string getPhoneNumber() const;
        string getFax() const;
        string getContactPerson() const;
};