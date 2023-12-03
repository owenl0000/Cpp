#ifndef H_patientType
#define H_patientType

#include "personType.h"
#include "dateType.h"
#include "doctorType.h"
#include <string>

class patientType : public personType {
public:
    patientType(std::string first = "", std::string last = "", int pID = 0, int age = 0, 
                const dateType& dob = dateType(), 
                const dateType& admitDate = dateType(), 
                const dateType& dischargeDate = dateType(), 
                const doctorType& doc = doctorType());

    void setPatientInfo(int pID, int age, const dateType& dob, const dateType& admitDate, 
                        const dateType& dischargeDate, const doctorType& doc);

    void setPatientID(int pID);
    int getPatientID() const;

    void setAge(int age);
    int getAge() const;

    void setDOB(const dateType& dob);
    dateType getDOB() const;

    void setAdmitDate(const dateType& admitDate);
    dateType getAdmitDate() const;

    void setDischargeDate(const dateType& dischargeDate);
    dateType getDischargeDate() const;

    void setAttendingPhysician(const doctorType& doc);
    doctorType getAttendingPhysician() const;

    void print() const;

private:
    int patientID;
    int age;
    dateType birthDate;
    dateType admitDate;
    dateType dischargeDate;
    doctorType attendingPhysician;
};

#endif 
