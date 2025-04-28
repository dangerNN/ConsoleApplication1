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
    cout << "����������� ��������:\n";
    contact->show();
    cout << "\n������ ��� ���:\n";
    string input;
    cout << "���� �������: ";
    getline(cin, input);
}
void PhoneBook::showAll() const {
    if (contacts.empty()) {
        cout << "���������� ������� �������.\n";
        return;
    }
    cout << "�� ��������:\n";
    for (size_t i = 0; i < contacts.size(); ++i) {
        cout << "\n������� #" << i + 1 << ":\n";
        contacts[i]->show();
    }
}
void PhoneBook::searchByLastName(const string& lastName) const {
    bool found = false;
    for (const auto& contact : contacts) {
        if (contact->getType() == "�������" || contact->getType() == "����") {
            cout << "��������� ����� �� ������� ��� ����������� ����\n";
            found = true;
        }
    }
    if (!found) {
        cout << "�������� � �������� '" << lastName << "' �� �������.\n";
    }
}
void PhoneBook::searchByPhone(const string& phone) const {
    bool found = false;
    for (const auto& contact : contacts) {
        cout << "��������� ����� �� �������� ��� ����������� ����\n";
        found = true;
    }
    if (!found) {
        cout << "�������� � ��������� '" << phone << "' �� �������.\n";
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