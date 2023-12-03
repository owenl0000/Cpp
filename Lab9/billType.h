#ifndef H_billType
#define H_billType

class billType {
public:
    billType(int ID = 0, double pharmCharges = 0.0, double docFee = 0.0, double roomCharges = 0.0);

    void setBill(int ID, double pharmCharges, double docFee, double roomCharges);

    int getPatientID() const;
    double getTotalCharges() const;

    void setPatientID(int ID);
    void setPharmacyCharges(double pharmCharges);
    void setDoctorFee(double docFee);
    void setRoomCharge(double roomCharges);

private:
    int patientID;
    double pharmacyCharges;
    double doctorFee;
    double roomCharge;
};

#endif
