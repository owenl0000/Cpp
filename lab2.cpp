#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


void question1() {
    int x, y, z;
    char ch;

    cout << endl;
    // Part a
    cout << "Part a input: ";
    cin >> x >> y >> z >> ch;
    cout << "Part a outputs: " << "|x: " << x << "|y: " << y << "|z: " << z << "|ch: " << ch << "|" << endl << endl;
    cin.ignore(100, '\n');

    // Part b
    cout << "Part b input: ";
    cin >> ch >> x >> y >> z;
    cout << "Part b outputs: " << "|x: " << x << "|y: " << y << "|z: " << z << "|ch: " << ch << "|" << endl << endl;
    cin.ignore(100, '\n');

    // Part c
    cout << "Part c input: ";
    cin >> x;
    cin.get(ch);
    cin >> y >> z;
    cout << "Part c outputs: " << "|x: " << x << "|y: " << y << "|z: " << z << "|ch: " << ch << "|" << endl << endl;
    cin.ignore(100, '\n');

    // Part d
    cout << "Part d input: ";
    cin >> x >> ch >> y >> z;
    cin.get(ch);
    cout << "Part d outputs: " << "|x: " << x << "|y: " << y << "|z: " << z << "|ch: " << ch << "|" << endl << endl;
    cin.ignore(100, '\n');

    // Part e
    cout << "Part e input: ";
    cin >> x >> y >> z;
    cout << "Part e outputs: " << "|x: " << x << "|y: " << y << "|z: " << z << "|ch: " << ch << "|" << endl;
    cin.ignore(100, '\n');
}


void question2() {
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
    input.close();
    output.close();
    cout << endl;
    cout << "outData.txt updated... Closing output & input..." << endl;
}

void question3() {

    double weightkg;
    double lbs = 2.2;
    double conversion;

    cout << endl;
    cout << "Enter weight in kilgrams: ";
    cin >> weightkg;
    conversion = weightkg * lbs;
    cout << fixed << setprecision(2) << "Weight in Kilograms: " << weightkg << ", Weight in pounds: " << setprecision(2) << conversion << endl;

}

void question4() {
    double yardlength;
    double treeradius;
    double distanceoftrees;
    int trees;
    double sizeoftree;
    double spaceoccupied;
    const double PI = 3.141592653589793;
    
    cout << endl;
    cout << "Enter the length of the yard: ";
    cin >> yardlength;
    cout << "Enter the radius of tree: ";
    cin >> treeradius;
    cout << "Enter space between trees: ";
    cin >> distanceoftrees;

    sizeoftree = PI * (treeradius * treeradius);
    trees = yardlength / distanceoftrees;
    spaceoccupied = trees * sizeoftree;
    cout << "The number of trees you can plant is: " << trees << endl;
    cout << "The total of space occupied by trees is: " << spaceoccupied << endl;
}




int main() {
    cout << "__________________________________________________" << endl;
    cout << endl;
    cout << "Question 1:" << endl;
    cout << "__________________________________________________" << endl;
    question1();
    cout << "__________________________________________________" << endl;
    cout << endl;
    cout << "Question 2:" << endl;
    cout << "__________________________________________________" << endl;
    question2();
    cout << "__________________________________________________" << endl;
    cout << endl;
    cout << "Question 3:" << endl;
    cout << "__________________________________________________" << endl;
    question3();
    cout << "__________________________________________________" << endl;
    cout << endl;
    cout << "Question 4:" << endl;
    cout << "__________________________________________________" << endl;
    question4();
    cout << "__________________________________________________" << endl;
    return 0;
}

