#include <iostream>
#include "doctorType.h"

using namespace std;

void doctorType::print() const {
    personType::print();  
    cout << "Specialty: " << specialty << endl;
}
