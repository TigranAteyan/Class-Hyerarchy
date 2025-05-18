#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
protected:
    std::string name;
    std::string surname;
    int age;
    std::string passportNumber;
    std::string role;
public:
    Member(const std::string& name, const std::string& surname, int age, const std::string& passportNumber, const std::string& role);

    virtual std::string toString() const;

    std::string getName() const;
    std::string getSurname() const;
    int getAge() const;
    std::string getPassportNumber() const;
    std::string getRole() const;

    bool equals(const Member& other) const;

    virtual ~Member();
};

#endif
