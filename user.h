#pragma once
#include <string>

using std::string;

class User {
private:
    string      userId;      // 사용자 ID
    string      userName;     // 이름
    string      userEmail;    // 이메일

public:
    User();
    User(string userId, const string& userName, const string& userEmail);

    string      getUserId()         const;
    string      getUserName()       const;
    string      getUserEmail()      const;
    void        display()       const;
};
