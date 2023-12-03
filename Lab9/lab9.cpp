#include <iostream>
#include "doctorType.h"
#include "patientType.h"
#include "billType.h"

using namespace std;

int main() {
    doctorType doctor("John", "Doe", "Cardiology");

    patientType patient("Jane", "Smith", 1001, 30, dateType(1, 1, 1990), dateType(11, 1, 2023), dateType(11, 10, 2023), doctor);

    billType bill(1001, 200.0, 300.0, 1000.0);

    cout << "Patient Info:" << endl;
    patient.print();
    cout << "Total Charges: $" << bill.getTotalCharges() << endl;

    return 0;
}
