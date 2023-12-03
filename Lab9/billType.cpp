#include "billType.h"

billType::billType(int ID, double pharmCharges, double docFee, double roomCharges)
    : patientID(ID), pharmacyCharges(pharmCharges), doctorFee(docFee), roomCharge(roomCharges) {}

void billType::setBill(int ID, double pharmCharges, double docFee, double roomCharges) {
    patientID = ID;
    pharmacyCharges = pharmCharges;
    doctorFee = docFee;
    roomCharge = roomCharges;
}

int billType::getPatientID() const {
    return patientID;
}

double billType::getTotalCharges() const {
    return pharmacyCharges + doctorFee + roomCharge;
}

void billType::setPatientID(int ID) {
    patientID = ID;
}

void billType::setPharmacyCharges(double pharmCharges) {
    pharmacyCharges = pharmCharges;
}

void billType::setDoctorFee(double docFee) {
    doctorFee = docFee;
}

void billType::setRoomCharge(double roomCharges) {
    roomCharge = roomCharges;
}
