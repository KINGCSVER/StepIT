#include <iostream>

using namespace std;

class User {
private:
    string name{};
    string surname{};
    string email{};
    string password{};
    string phone{};
public:
    User() = default;

    User(string& name, string& surname, string& email, string& password, string& phone);
    User(char _name[], char _surname[], char _email[], char _password[], char phone[]);

    char* tostring();

    void setName(string& _name);
    void setSurname(string& _surname);
    void setEmail(string& _email);
    void setPassword(string& _password);
    void setPhone(string& _phone);

    string getName() const;
    string getSurname() const;
    string getEmail() const;
    string getPassword() const;
    string getPhone() const;
};