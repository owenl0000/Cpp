#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Question 1--------------------------------------------------
void question1() {

    int num;
    int add;
    cout << "Enter a whole number: ";
    cin >> num;

    if (!cin) {
        cout << "Invalid input. Exiting function." << endl;
        cin.clear();
        cin.ignore(100, '\n');
        return;
    }

    cout << "New Total: " << num << endl;

    while (cin) {
        cout << "Enter a whole number: ";
        cin >> add;
        
        if (cin) {
            num += add;
            cout << "New Total: " << num << endl;
        } else {
            cout << "Invalid input. Exiting function." << endl;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        }
    }
}

//Question 2--------------------------------------------------
void question2() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 0, b = 1;

    if(n == 0) { cout << "Fibonacci sequence for " << '"' << n << '"' << " is " << 0 << "." << endl; }
    else if (n == 1) { cout << "Fibonacci sequence for " << '"' << n << '"' << " is " << 1 << "." << endl; }
    
    else {
        int a = 0, b = 1;
        cout << "Fibonacci sequence for " << '"' << n << '"' << " is " << " " << b << " ";
        for(int i = 2; i <= n; i++) {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    cout << endl;
}

//Question 3--------------------------------------------------
void question3(){
    int num;
    int add;
    cout << "Enter a whole number: ";
    cin >> num;

    if (!cin) {
        cout << "Invalid input. Exiting function." << endl;
        cin.clear();
        cin.ignore(100, '\n');
        return;
    }
    if(num > 0) {
        cout << "New Total: " << num << endl;
    }   
    else {
        cout << "Enter a positive whole number: ";
        cin >> num;
    }

    while (cin) {
        cout << "Enter a whole number: ";
        cin >> add;
        if(add < 0) {
            cout << "New Total: " << num << endl;
            continue;
        }
        
        if (cin) {
            num += add;
            cout << "New Total: " << num << endl;
        } else {
            cout << "Invalid input. Exiting function." << endl;
            cin.clear();
            cin.ignore(100, '\n');
            break;
        }
    }
}

//Question 4--------------------------------------------------
void question4() {
    double popA, popB; //population
    double growthRateA, growthRateB;
    int yearsPassed = 0;


    cout << "Enter the population for Town A: ";
    cin >> popA;
    cout <<"Enter the growth rate for Town A: ";
    cin >> growthRateA;

    cout << "Enter the population for Town B: ";
    cin >> popB;
    cout <<"Enter the growth rate for Town B: ";
    cin >> growthRateB;

    cout << "Calculating..." << endl;
    while(popA < popB) {
        popA = popA * (1 + (growthRateA / 100.0));
        popB = popB * (1 + (growthRateB / 100.0));
        yearsPassed++;
        if(popA >= popB) {
            break;
        }
    }
    cout << "Town A population: " << fixed << setprecision(0) << popA << endl;
    cout << "Town B population: " << setprecision(0) << popB << endl;
    cout << "It took " << yearsPassed << " years for Town A's population to be greater or equal to Town B." << endl;
    cout.unsetf(std::ios::fixed);
}

//Question 5--------------------------------------------------
void question5() {
    double e = 2.0;
    int n;
    
    cout << "Enter a positive number: ";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        double factorial = 1.0;
        for(int j = 1; j <= i; j++) {
            factorial = factorial * j;
            
        }
        double term = 1 / factorial;
        e = e + term;
    }
    cout << "The approximate value of e is " << setprecision(6) << e << endl;


}

//Question 6--------------------------------------------------
bool isPalindrome (string str);
bool isPalindrome (string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        char p1 = tolower(str[left]);
        char p2 = tolower(str[right]);
        if(p1 != p2) {
            return false;
        }
        else {
            left++;
            right--;
        }
    }
    return true;

}
void question6() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    if(isPalindrome(word)) {
        cout << "The word (" << word << ") is a palindrome." << endl;
    }
    else {
        cout << "The word (" << word << ") is not a palindrome." << endl;
    }
}

//Question 7--------------------------------------------------
void reverseDigit(int &num);
void reverseDigit(int &num) {
    int reversed = 0;
    int originalNum = num;

    while(num != 0) {
        int lastDigit = num % 10;
        reversed = (reversed * 10) + lastDigit;
        num = num / 10;
    }
    
    num = reversed;
}

void question7() {
    int num;
    cout << "Original Number: ";
    cin >> num;
    reverseDigit(num);
    cout << "Reversed Number: " << num << endl;
}

//For Print
int main() {
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 1:" << endl;
    cout << "__________________________________________________" << endl << endl;
    //question1();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 2:" << endl;
    cout << "__________________________________________________" << endl << endl;
    //question2();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 3:" << endl;
    cout << "__________________________________________________" << endl << endl;
    //question3();
    cout << "__________________________________________________" << endl << endl;
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 4:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question4();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 5:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question5();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 6:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question6();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 7:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question7();
    cout << "__________________________________________________" << endl << endl;
    return 0;
}