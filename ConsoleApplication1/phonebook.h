#pragma once
#include <vector>
#include <memory>
#include "contact.h"

    class PhoneBook {
    private:
        vector<unique_ptr<Contact>> contacts;

    public:
        void addContact(unique_ptr<Contact> contact);
        void removeContact(size_t index);
        void editContact(size_t index);
        void showAll() const;
        void searchByLastName(const string& lastName) const;
        void searchByPhone(const string& phone) const;
        size_t getSize() const;
        Contact* getContact(size_t index);
};