#pragma once
#include <string>

enum class Gender {
    Male,
    Female,
    Other
};

class Student {
public:
    Student(std::string name,
            std::string lastName,
            std::string address,
            int indexNumber, 
            std::string pesel,
            Gender gender);
private:
    Gender g;
};