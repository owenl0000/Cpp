#ifndef H_doctorType
#define H_doctorType

#include <iostream>
#include "personType.h"
#include <string>

using namespace std;

class doctorType : public personType {
    public:
        doctorType(string first = "", string last = "", string special = "")
            : personType(first, last), specialty(special) {}

        void setSpecialty(string special) {
            specialty = special;
        }

        string getSpecialty() const {
            return specialty;
        }

        void print() const;

    private:
        string specialty;
};

#endif