#include "phonebook.h"

void PhoneBook::addContact(unique_ptr<Contact> contact) {
    contacts.push_back(move(contact));
}
void PhoneBook::removeContact(size_t index) {
    if (index < contacts.size()) {
        contacts.erase(contacts.begin() + index);
    }
}
void PhoneBook::editContact(size_t index) {
    if (index >= contacts.size()) return;
    Contact* contact = contacts[index].get();
    cout << "Редагування контакту:\n";
    contact->show();
    cout << "\nВведіть нові дані:\n";
    string input;
    cout << "Нове прізвище: ";
    getline(cin, input);
}
void PhoneBook::showAll() const {
    if (contacts.empty()) {
        cout << "Телефонний довідник порожній.\n";
        return;
    }
    cout << "Всі контакти:\n";
    for (size_t i = 0; i < contacts.size(); ++i) {
        cout << "\nКонтакт #" << i + 1 << ":\n";
        contacts[i]->show();
    }
}
void PhoneBook::searchByLastName(const string& lastName) const {
    bool found = false;
    for (const auto& contact : contacts) {
        if (contact->getType() == "Персона" || contact->getType() == "Друг") {
            cout << "Реалізуйте пошук по прізвищу для конкретного типу\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Контакти з прізвищем '" << lastName << "' не знайдені.\n";
    }
}
void PhoneBook::searchByPhone(const string& phone) const {
    bool found = false;
    for (const auto& contact : contacts) {
        cout << "Реалізуйте пошук по телефону для конкретного типу\n";
        found = true;
    }
    if (!found) {
        cout << "Контакти з телефоном '" << phone << "' не знайдені.\n";
    }
}
size_t PhoneBook::getSize() const {
    return contacts.size();
}
Contact* PhoneBook::getContact(size_t index) {
    if (index < contacts.size()) {
        return contacts[index].get();
    }
    return nullptr;
}