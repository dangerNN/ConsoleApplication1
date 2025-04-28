#include "phonebook.h"
#include "person.h"
#include "colleague.h"
#include "friendd.h"
#include <iostream>
#include <memory>
#include <limits>

using namespace std;

void displayMenu() {
    cout << "\nМеню телефонного довідника:\n";
    cout << "1. Додати контакт\n";
    cout << "2. Видалити контакт\n";
    cout << "3. Редагувати контакт\n";
    cout << "4. Показати всі контакти\n";
    cout << "5. Пошук за прізвищем\n";
    cout << "6. Пошук за телефоном\n";
    cout << "0. Вихід\n";
    cout << "Виберіть опцію: ";
}

void addContactMenu(PhoneBook& phoneBook) {
    cout << "\nДодати контакт:\n";
    cout << "1. Персона\n";
    cout << "2. Колега\n";
    cout << "3. Друг\n";
    cout << "Виберіть тип контакту: ";

    int type;
    cin >> type;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string lastName, address, phone, company, fax, contactPerson, birthDate;

    switch (type) {
    case 1: {
        cout << "Прізвище: ";
        getline(cin, lastName);
        cout << "Адреса: ";
        getline(cin, address);
        cout << "Телефон: ";
        getline(cin, phone);
        phoneBook.addContact(make_unique<Person>(lastName, address, phone));
        break;
    }
    case 2: {
        cout << "Організація: ";
        getline(cin, company);
        cout << "Адреса: ";
        getline(cin, address);
        cout << "Телефон: ";
        getline(cin, phone);
        cout << "Факс: ";
        getline(cin, fax);
        cout << "Контактна особа: ";
        getline(cin, contactPerson);
        phoneBook.addContact(make_unique<Colleague>(company, address, phone, fax, contactPerson));
        break;
    }
    case 3: {
        cout << "Прізвище: ";
        getline(cin, lastName);
        cout << "Адреса: ";
        getline(cin, address);
        cout << "Телефон: ";
        getline(cin, phone);
        cout << "Дата народження: ";
        getline(cin, birthDate);
        phoneBook.addContact(make_unique<Friend>(lastName, address, phone, birthDate));
        break;
    }
    default:
        cout << "Невірний вибір.\n";
    }
    cout << "Контакт додано успішно.\n";
}

int main() {
	setlocale(LC_ALL, "");
    PhoneBook phoneBook;
    int choice;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1: {
            addContactMenu(phoneBook);
            break;
        }
        case 2: {
            if (phoneBook.getSize() == 0) {
                cout << "Довідник порожній.\n";
                break;
            }
            cout << "Введіть номер контакту для видалення (1-" << phoneBook.getSize() << "): ";
            size_t index;
            cin >> index;
            cin.ignore();
            if (index > 0 && index <= phoneBook.getSize()) {
                phoneBook.removeContact(index - 1);
                cout << "Контакт видалено.\n";
            }
            else {
                cout << "Невірний номер контакту.\n";
            }
            break;
        }
        case 3: {
            if (phoneBook.getSize() == 0) {
                cout << "Довідник порожній.\n";
                break;
            }
            cout << "Введіть номер контакту для редагування (1-" << phoneBook.getSize() << "): ";
            size_t index;
            cin >> index;
            cin.ignore();
            if (index > 0 && index <= phoneBook.getSize()) {
                phoneBook.editContact(index - 1);
            }
            else {
                cout << "Невірний номер контакту.\n";
            }
            break;
        }
        case 4: {
            phoneBook.showAll();
            break;
        }
        case 5: {
            string lastName;
            cout << "Введіть прізвище для пошуку: ";
            getline(cin, lastName);
            phoneBook.searchByLastName(lastName);
            break;
        }
        case 6: {
            string phone;
            cout << "Введіть телефон для пошуку: ";
            getline(cin, phone);
            phoneBook.searchByPhone(phone);
            break;
        }
        case 0: {
            cout << "До побачення!\n";
            break;
        }
        default: {
            cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
        }
    } while (choice != 0);

    return 0;
}