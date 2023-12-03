#include "patientType.h"
#include <iomanip>
using namespace std;

patientType::patientType(std::string first, std::string last, int pID, int age, 
                         const dateType& dob, const dateType& admitDate, 
                         const dateType& dischargeDate, const doctorType& doc)
    : personType(first, last), patientID(pID), age(age), 
      birthDate(dob), admitDate(admitDate), dischargeDate(dischargeDate), 
      attendingPhysician(doc) {}

void patientType::setPatientInfo(int pID, int age, const dateType& dob, 
                                 const dateType& admitDate, const dateType& dischargeDate, 
                                 const doctorType& doc) {
    patientID = pID;
    this->age = age;
    birthDate = dob;
    this->admitDate = admitDate;
    this->dischargeDate = dischargeDate;
    attendingPhysician = doc;
}

void patientType::setPatientID(int pID) {
    patientID = pID;
}

int patientType::getPatientID() const {
    return patientID;
}

void patientType::setAge(int age) {
    this->age = age;
}

int patientType::getAge() const {
    return age;
}

void patientType::setDOB(const dateType& dob) {
    birthDate = dob;
}

dateType patientType::getDOB() const {
    return birthDate;
}

void patientType::setAdmitDate(const dateType& admitDate) {
    this->admitDate = admitDate;
}

dateType patientType::getAdmitDate() const {
    return admitDate;
}

void patientType::setDischargeDate(const dateType& dischargeDate) {
    this->dischargeDate = dischargeDate;
}

dateType patientType::getDischargeDate() const {
    return dischargeDate;
}

void patientType::setAttendingPhysician(const doctorType& doc) {
    attendingPhysician = doc;
}

doctorType patientType::getAttendingPhysician() const {
    return attendingPhysician;
}

void patientType::print() const {
    cout << setfill('=') << setw(40) << "" << endl; // Top border of the card
    cout << setfill(' ') << endl; // Reset fill character for text

    // Print the name in a neat format
    cout << setw(20) << left << "Name: ";
    personType::print(); // Assuming this prints the name only

    // Print additional details in an organized manner
    cout << setw(20) << left << "Patient ID: " << patientID << endl;
    cout << setw(20) << left << "Age: " << age << endl;
    
    cout << setw(20) << left << "Date of Birth: ";
    birthDate.printDate();
    cout << endl; // New line after date

    cout << setw(20) << left << "Admit Date: ";
    admitDate.printDate();
    cout << endl; // New line after date

    cout << setw(20) << left << "Discharge Date: ";
    dischargeDate.printDate();
    cout << endl; // New line after date\

    cout << setfill('=') << setw(40) << "" << endl; // Bottom border of the card
    cout << setfill(' '); // Reset fill character for text\

    cout << setw(20) << left << "Attending Physician: ";
    attendingPhysician.print(); // Assuming this prints the physician's name
    cout << endl; // New line after name

    
}

