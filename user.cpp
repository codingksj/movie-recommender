#include "user.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;

User::User() : userId(""), userName(""), userEmail("") {}
User::User(string userId, const string& userName, const string& userEmail)
    : userName(userName) {
    if (userId.length() > 50) {
        cout << "아이디가 너무 깁니다!" << '\n';
        this->userId = userId.substr(0, 50);
    } else {
        this->userId = userId;
    }

    if (userEmail.length() > 50) {
        cout << "이메일이 너무 깁니다!" << '\n';
        this->userEmail = userEmail.substr(0, 50);
    } else {
        this->userEmail = userEmail;
    }
}

string  User::getUserId()       const { return userId; }
string  User::getUserName()     const { return userName; }
string  User::getUserEmail()    const { return userEmail; }

void User::display() const {
    cout << "[ 유저 ID ] " << userId << " [ 유저 이름 ] " << userName << " [ 유저 이메일 ] " << userEmail << '\n';
}
