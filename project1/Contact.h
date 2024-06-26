#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <vector>
#include <string>
#include "User.h"

class Contact {
private:

    int count;
    std::vector<User> users;

public:

    Contact();
    void AddUser(const int& id, const std::string& firstname, const std::string& lastname, const char& gender, const std::string& city, const Date& date);
    void AddPhoneNumber(const std::string& name, const std::string& phone, const std::string& type, const std::string& description);
    void AddAddress(const std::string& name, const std::string& address, const std::string& type, const std::string& description);
    void AddEmail(const std::string& name, const std::string& email, const std::string& type, const std::string& description);
    void EditUser(const std::string& old_value, const std::string& new_value, const std::string& type);
    int CountUser();
    bool SearchUser(const std::string& query);
    void DeleteUser(const std::string& value);
    void ShowAll();

};

#endif // CONTACT_H_INCLUDED
