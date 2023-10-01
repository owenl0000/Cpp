#include <iostream>
#include <iomanip>

using namespace std;

void question1() {
    int num;
    cout << "Enter an integer between 0 and 35: ";
    cin >> num;
    if(num <= 9) {
        cout << num << endl;
    }
    else {
        char letter = static_cast<char>('A' + (num - 10));
        cout << "The letter for your number is: " << letter << endl;
    }
}

void question2() {
    //types of discount
    double threedaystay = 5.0;
    double tenrooms = 10.0;
    double twentyrooms = 20.0;
    double thirtyrooms = 30.0;

    double costofroom = 100;
    int numofrooms, numofdays;
    double salestax, totalcost, discountrate = 0.0; 
    
    cout << "The cost of each room is $100.00 per night." << endl;
    cout << "Enter the number of rooms you want to rent: ";
    cin >> numofrooms;
    cout << "Enter the number of days you want to stay: ";
    cin >> numofdays;
    cout << "Enter sales tax rate (00.00): ";
    cin >> salestax;

    totalcost = costofroom * numofrooms * numofdays; //total cost without discount & sales tax

    if(numofrooms >= 30) {    //30 rooms discount
        discountrate += thirtyrooms; 
    }
    else if(numofrooms >= 20) {      //20 rooms discount
        discountrate += twentyrooms; 
    }
    else if(numofrooms >= 10) {   //10 rooms discount
        discountrate += tenrooms; 
    }
    
    if(numofdays >= 3) { //3 days discount
        discountrate += threedaystay;
    }

    totalcost -= totalcost * (discountrate/100); //total cost after discount

    totalcost += totalcost * (salestax/100); // total cost after salestax

    cout << "Here is your total for " << numofrooms << " room(s) and " << numofdays << " day(s) stay: $" << fixed << setprecision(2) << totalcost << endl;


}

void question3() {
    int gender;
    double bodyweight, wrist, waist, hip, forearm;
    double bodyfat, bodyfatpercentage = 0.0;
    double A1, A2, A3, A4, A5, B;

    cout << "Enter your gender(1 for female/2 for male): ";
    cin >> gender;
    
    if(gender == 1) { //female
        cout << "Enter your body weight(pounds/lbs): ";
        cin >> bodyweight;
        cout << "Enter your wrist measurement at fullest point(inches): ";
        cin >> wrist;
        cout << "Enter your waist measurement at navel(inches): ";
        cin >> waist;
        cout << "Enter your hip measurement at fullest point(inches): ";
        cin >> hip;
        cout << "Enter your forearm measurement at fullest point(inches): ";
        cin >> forearm;

        A1 = (bodyweight * 0.732) + 8.987;
        A2 = wrist / 3.140;
        A3 = waist * 0.157;
        A4 = hip * 0.249;
        A5 = forearm * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        bodyfat = bodyweight - B;
        bodyfatpercentage = (bodyfat * 100) / bodyweight;

        cout << "Your body fat percentage is " << fixed << setprecision(2) << bodyfatpercentage << "%." << endl;

    }
    else { //male
        cout << "Enter your body weight(pounds/lbs): ";
        cin >> bodyweight;
        cout << "Enter your wrist measurement(inches): ";
        cin >> wrist;
        A1 = (bodyweight * 1.082) + 94.42;
        A2 = wrist * 4.15;
        B = A1 - A2;
        bodyfat = bodyweight - B;
        bodyfatpercentage = (bodyfat * 100) / bodyweight;

        cout << "Your body fat percentage is " << fixed << setprecision(2) << bodyfatpercentage << "%." << endl;
    }
}

int main() {
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 1:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question1();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 2:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question2();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 3:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question3();
    cout << "__________________________________________________" << endl << endl;
    return 0;
}