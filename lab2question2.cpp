#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream input;
    ofstream output;
    
    string fname;
    string lname;
    string department;
    
    double mgs, mb, tax, paycheck;
    double distance, traveltime, averagespd;
    double cupsold, costpercup, salestotal;

    input.open("inData.txt");
    output.open("outData.txt");

    
    input >> fname >> lname >> department;
    output << "Name: " << fname << " " << lname << ", " << "Department: " << department << endl;
    input >> mgs >> mb >> tax >> distance >> traveltime >> cupsold >> costpercup;
    paycheck = (mgs + (mgs * (mb / 100))) - (mgs + (mgs * (mb / 100))) * (tax / 100) ;
    averagespd = distance / traveltime;
    salestotal = cupsold * costpercup;
    output << fixed; 
    output << "MonthlyGrossSalary: $" << setprecision(2) << mgs << ", MonthlyBonus: " << setprecision(2) << mb << "%, " << "Taxes: " << setprecision(2) << tax << "%" << endl;
    output << "Paycheck: $" << setprecision(2) << paycheck << endl << endl;
    output << "Distance Traveled: " << setprecision(2) << distance << " miles, " << "Traveling Time: " << setprecision(2) << traveltime << " hours" << endl;
    output << "Average speed: " << setprecision(2) << averagespd << " miles per hour"<< endl << endl;
    output.unsetf(ios::fixed);
    output << "Number of Cofee Cups Sold: " << cupsold << ", " << "Cost: $" << fixed << setprecision(2) << costpercup << " per cup" << endl;
    output << "Sales Amount = $" << setprecision(2) << salestotal;  
    

    return 0;
}