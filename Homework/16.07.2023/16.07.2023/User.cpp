#include "User.h"

User::User(string& name, string& surname, string& email, string& password, string& phone) {
    this->name = name;
    this->surname = surname;
    this->email = email;
    this->password = password;
    this->phone = phone;
}

User::User(char _name[], char _surname[], char _email[], char _password[], char _phone[])
{
    this->name = _name;
    this->surname = _surname;
    this->email = _email;
    this->password = _password;
    this->phone = _phone;
}

char* User::tostring()
{
    char* str = new char[250] {};
    char data[5][50]{};
    name.copy(data[0], sizeof(name));
    surname.copy(data[1], sizeof(surname));
    email.copy(data[2], sizeof(email));
    password.copy(data[3], sizeof(password));
    phone.copy(data[4], sizeof(phone));
    sprintf_s(str, 250, "%s\n%s\n%s\n%s\n%s\n", data[0], data[1], data[2], data[3], data[4]);
    return str;
}


void User::setName(string& _name)
{
    this->name = _name;
}

void User::setSurname(string& _surname)
{
    this->surname = _surname;
}

void User::setEmail(string& _email)
{
    this->email = _email;
}

void User::setPassword(string& _password)
{
    this->password = _password;
}

void User::setPhone(string& _phone)
{
    this->phone = _phone;
}

string User::getName() const {
    return this->name;
}

string User::getSurname() const {
    return this->surname;
}

string User::getEmail() const {
    return this->email;
}

string User::getPassword() const {
    return this->password;
}

string User::getPhone() const {
    return this->phone;
}