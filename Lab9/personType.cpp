#include "personType.h"
#include <iostream>

void personType::print() const {
    std::cout << firstName << " " << lastName << std::endl;
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const {
    return firstName;
}

string personType::getLastName() const {
    return lastName;
}

personType::personType(string first, string last)
    : firstName(first), lastName(last) {
}
