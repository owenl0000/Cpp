#include <iostream>

using namespace std;

 
void question1() {
    int tbAsterisks = 68;
    int halfAsterisks = tbAsterisks/2;
    cout << endl;
    for(int i = 0; i < tbAsterisks; i++) {
        if(i == halfAsterisks) {
            cout << endl;
            cout << "* Programming Assignment 1       *" << endl;
            cout << "* Computer Programming I         *" << endl;
            cout << "*          Author: ???           *" << endl;
            cout << "* Due Date: Thursday, Jan. 24    *" << endl;
        }
        cout << "*";
    }
    cout << endl;
}

void question2() {
    cout << endl;
    cout << "CCCCCCCCC         ++               ++      " << endl;
    cout << "CC                ++               ++      " << endl;
    cout << "CC          ++++++++++++++   ++++++++++++++" << endl;
    cout << "CC          ++++++++++++++   ++++++++++++++" << endl;
    cout << "CC                ++               ++      " << endl;
    cout << "CCCCCCCCC         ++               ++      " << endl;
}

void question3() {
        cout << "\nIncorrect Program: " << endl;
        cout << "#include <iostream>\n"
         << "{\n"
         << "int main()\n"
         << "    cout << \"Enter the radius: \";\n"
         << "    cin >> radius;\n"
         << "    cout << endl;\n"
         << "\n"
         << "    double radius;\n"
         << "    double area;\n"
         << "\n"
         << "    using namespace std;\n"
         << "\n"
         << "    return 0;\n"
         << "\n"
         << "    cout << \"Area = \" << area << endl;\n"
         << "    area = PI * radius * radius;\n"
         << "    circumference = 2 * PI * radius;\n"
         << "    cout << \"Circumference = \" << circumference << endl;\n"
         << "    const double PI = 3.14;\n"
         << "    double circumference;\n"
         << "}\n" << endl;
         cout << "-------------------------------" << endl;
         cout << "Corrected Program: " << endl;
         cout << "#include <iostream>\n"
         << "using namespace std;\n"
         << "\n"
         << "int main() {\n"
         << "    double radius;\n"
         << "    double area;\n"
         << "    double circumference;\n"
         << "    const double PI = 3.14;\n"
         << "\n"
         << "    cout << \"Enter the radius: \";\n"
         << "    cin >> radius;\n"
         << "    cout << endl;\n"
         << "\n"
         << "    area = PI * radius * radius;\n"
         << "    cout << \"Area = \" << area << endl;\n"
         << "\n"
         << "    circumference = 2 * PI * radius;\n"
         << "    cout << \"Circumference = \" << circumference << endl;\n"
         << "\n"
         << "    return 0;\n"
         << "}\n" << endl;

        double radius;
        double area;
        double circumference;
        const double PI = 3.14;

        cout << "Enter the radius: ";
        cin >> radius;
        cout << endl;
        
        area = PI * radius * radius;
        cout << "Area = " << area << endl;
        
        circumference = 2 * PI * radius;
        cout << "Circumference = " << circumference << endl;
}

void question4() {
    double decimalNum;
    double decimal;
    cout << "\nEnter a decimal number: ";
    cin >> decimalNum;
    cout << endl;
    decimal = decimalNum - static_cast<int>(decimalNum);
    if(decimal > .49) {
        cout << "Rounded number: " << static_cast<int>(decimalNum+1) << endl;
    }
    else {
        cout << "Rounded number: " << static_cast<int>(decimalNum) << endl;
    }
    
}

void question5() {
    double fuelCapacity;
    double mpg; //miles per gallon
    double numOfmiles;

    cout << "\nEnter the number of gallons in the fuel tank: ";
    cin >> fuelCapacity;
    cout << "Enter the miles per gallon: ";
    cin >> mpg;
    cout << endl;

    numOfmiles = mpg * fuelCapacity;
    cout << "The automobile can drive up to " << numOfmiles << " miles until next refill." << endl;
}

void question6() {
    int numofSeconds;
    int hours;
    int minutes;
    int seconds;   
    cout << "\nEnter the total number of seconds: ";
    cin >> numofSeconds;
    cout << endl;

    seconds = numofSeconds % 60;
    minutes = (numofSeconds % 3600) / 60;
    hours = numofSeconds / 3600;

    cout << "The event is " << hours << ":" << minutes << ":" << seconds << " long." << endl;
}

void question7() {
    double total_milk_liters; 
    double carton_profit = .27;
    double liter_cost = .38;
    double amount_cartons;
    double totalProfit;
    double totalCost;

    cout << "\nEnter total amount of liters: ";
    cin >> total_milk_liters;
    amount_cartons = total_milk_liters / 3.78;
    double decimal = amount_cartons - static_cast<int>(amount_cartons);
    if(decimal > 0) {  // if theres only a little bit of milk left, it still takes another carton because 1 carton is already filled
        
        totalProfit = amount_cartons * carton_profit;
        totalCost = liter_cost * total_milk_liters;
        amount_cartons = static_cast<int>(amount_cartons) + 1;    
        cout << "Total amount of milk cartons: " << amount_cartons << endl;
        cout << "Total cost of producing milk: $" << totalCost << endl;
        cout << "Total profit for producing milk: $" << totalProfit << endl;
    }
    else {
        totalProfit = amount_cartons * carton_profit;
        totalCost = liter_cost * total_milk_liters; 
        amount_cartons = static_cast<int>(amount_cartons);
        cout << "Total amount of milk cartons: " << amount_cartons << endl;
        cout << "Total cost of producing milk: $" << totalCost << endl;
        cout << "Total profit for producing milk: $" << totalProfit << endl;
    }

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
    cout << endl;
    cout << "Question 5:" << endl;
    cout << "__________________________________________________" << endl;
    question5();
    cout << "__________________________________________________" << endl;
    cout << endl;
    cout << "Question 6:" << endl;
    cout << "__________________________________________________" << endl;
    question6();
    cout << "__________________________________________________" << endl;
    cout << endl;
    cout << "Question 7:" << endl;
    cout << "__________________________________________________" << endl;
    question7();
    cout << "__________________________________________________" << endl;
    cout << endl;


    return 0;
}

