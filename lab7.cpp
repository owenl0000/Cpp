#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct salesPersonRec {
    int ID;
    double salesByQuarter[4];
    double totalSale;
};

void initialize(ifstream& indata, salesPersonRec list[], int& listSize) {
    if (!indata) {
        cerr << "File could not be opened." << endl;
        return;
    }

    while (indata >> list[listSize].ID) {

        for(int q = 0; q < 4; q++) {
            list[listSize].salesByQuarter[q] = 0.0;
        }

        list[listSize].totalSale = 0.0;

        listSize++;
    }

}

void getData(ifstream& infile, salesPersonRec list[], int& listSize) {
    if(!infile) {
        cerr << "File could not be opened." << endl;
        return;
    }

    while(infile && !infile.eof()) {
        int salesPersonID = 0;
        int month = 0;
        double salesAmount = 0.0;

        infile >> salesPersonID >> month >> salesAmount;

        int counter = -1;

        for(int i = 0; i < listSize; i++ ) {
            if(list[i].ID == salesPersonID) {
                counter = i;
                break;
            }
        }

        if(counter != -1) {
            int quarter = 0;
            quarter = (month - 1) / 3 + 1; // 1,2,3 = 1 | 4,5,6 = 2 ....

            list[counter].salesByQuarter[quarter-1] += salesAmount;
        }

        else {
            cerr << salesPersonID << " is not found in the system." << endl;
        }
    }
    
}


void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]) {
    for(int q = 0; q < 4; q++) {
        totalByQuarter[q] = 0.0;
    }

    for(int i = 0; i < listSize; i++) {
        totalByQuarter[0] += list[i].salesByQuarter[0];
        totalByQuarter[1] += list[i].salesByQuarter[1];
        totalByQuarter[2] += list[i].salesByQuarter[2];
        totalByQuarter[3] += list[i].salesByQuarter[3];
    }

}
void totalSaleByPerson(salesPersonRec list[], int listSize) {
    for(int i = 0; i < listSize; i++) {
        list[i].totalSale = 0;

        for(int q = 0; q < 4; q++) {
            list[i].totalSale += list[i].salesByQuarter[q];
        }
    }
}

void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]) {
    outfile << "-----------  Annual Sales Report -------------\n" << endl;
    outfile << setw(5) << "ID" 
            << setw(13) << "QT1" 
            << setw(10) << "QT2" 
            << setw(10) << "QT3" 
            << setw(10) << "QT4" 
            << setw(10) << "Total" << endl;
    outfile << "_____________________________________________________________\n";

    for (int i = 0; i < listSize; ++i) {
        outfile << list[i].ID
                << setw(13) << list[i].salesByQuarter[0]
                << setw(10) << list[i].salesByQuarter[1]
                << setw(10) << list[i].salesByQuarter[2]
                << setw(10) << list[i].salesByQuarter[3]
                << setw(10) << list[i].totalSale << "\n";
    }

    outfile << "Total"
            << setw(13) << saleByQuarter[0]
            << setw(10) << saleByQuarter[1]
            << setw(10) << saleByQuarter[2]
            << setw(10) << saleByQuarter[3] << "\n" << endl;
}

void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize) {
    double maxSales = 0.0;
    int maxIndex = -1;

    for (int i = 0; i < listSize; ++i) {
        if (list[i].totalSale > maxSales) {
            maxSales = list[i].totalSale;
            maxIndex = i;
        }
    }

    if (maxIndex != -1) { 
        outData << "Max Sale by SalesPerson: ID = " << list[maxIndex].ID 
                << ", Amount = $" << maxSales << "\n";
    }
}

void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]) {
    double maxSales = 0.0;
    int maxQuarter = -1;
    
    for (int q = 0; q < 4; ++q) {
        if (saleByQuarter[q] > maxSales) {
            maxSales = saleByQuarter[q];
            maxQuarter = q + 1; 
        }
    }

    outData << "Max Sale By Quarter: Quarter = "
            << maxQuarter << ", Amount = $" << maxSales << "\n";
}


int main() {
    const int maxSize = 100;
    int listSize = 0;
    salesPersonRec salesPersons[maxSize];
    double totalSalesByQuarter[4] = {0.0, 0.0, 0.0, 0.0};
    string inputFileName, outputFileName, salesDataFileName;

    cout << "Enter the name of the file containing the salesperson's ID data: ";
    cin >> inputFileName;
    ifstream indata;
    indata.open(inputFileName.c_str());
    if (!indata) {
        cerr << "File " << inputFileName << " could not be opened." << endl;
        return -1; // Terminate the program if file cannot be opened
    }

    initialize(indata, salesPersons, listSize);
    indata.close();
    

    cout << "Enter the name of the file containing the sales data: ";
    cin >> salesDataFileName;
    ifstream infile;
    infile.open(salesDataFileName.c_str());
    if (!infile) {
        cerr << "File " << salesDataFileName << " could not be opened." << endl;
        return -1; // Terminate the program if file cannot be opened
    }

    getData(infile, salesPersons, listSize);
    infile.close();
    

    cout << "Enter the name of the output file: ";
    cin >> outputFileName;
    ofstream outfile;
    outfile.open(outputFileName.c_str());
    if (!outfile) {
        cerr << "File " << outputFileName << " could not be opened for writing." << endl;
        return -1; // Terminate the program if file cannot be opened
    }
    
    outfile << fixed << showpoint << setprecision(2);

    saleByQuarter(salesPersons, listSize, totalSalesByQuarter);
    totalSaleByPerson(salesPersons, listSize);
    printReport(outfile, salesPersons, listSize, totalSalesByQuarter);
    maxSaleByPerson(outfile, salesPersons, listSize);
    maxSaleByQuarter(outfile, totalSalesByQuarter);

    outfile.close();
    return 0;
}