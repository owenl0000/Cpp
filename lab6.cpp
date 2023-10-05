#include <iostream>
#include <string>
using namespace std;

int seqSearch(const int list[], int listLength, int searchItem) {
    for(int i = 0; i < listLength; i++) {
        if(list[i] == searchItem) {
            return i;
        }
    }
    return -1;
}

void question1() { //will act as main for question 1
    int size = 10;
    int list[size] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
    int searchItem = 0;
    cout << "Enter a value you want to search: ";
    cin >> searchItem;
    int number = seqSearch(list, size, searchItem);
    if(number != -1) {
        cout << "The number you entered is at index " << number << endl;
    }
    else {
        cout << "The number you entered is not found!" << endl;
    }
}

 void sortList(int list[]) {
    int smallnum;
    for(int i = 0; i < 10; i++) {
        smallnum = i;
        for(int j = i + 1; j < 10; j++) {
            if(list[j] < list[smallnum]) {
                smallnum = j;
            }
        }
        int temp = list[i];
        list[i] = list[smallnum];
        list[smallnum] = temp;
    }
}

void question2() { // will act as main for question2
    int list[10] = {16, 30, 24, 7, 62, 45, 5, 55, 18, 90};
    sortList(list);
    cout << "Sorted List:";
    for(int i = 0; i < 10; i++) {
        cout << " " << list[i] << " ";
    }
    cout << endl;
}

void question3() {
    int size = 10;
    int multiplicationTable[size][size];
    int multiple = 1;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            multiplicationTable[i][j] = (i+1)*(j+1);
        }
    }
    int i = 0;
    int j = 0;
    cout << "Enter array for i: ";
    cin >> i;
    cout << "Enter array for j: ";
    cin >> j;
    while(cin) {
        cout << multiplicationTable[i][j] << endl;
        cout << "Enter array for i: ";
        cin >> i;
        cout << "Enter array for j: ";
        cin >> j;
    }
}

bool validPalindrome (string str) {
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

void question4() { //will act as main for question4
    string word;
    cout << "Enter a word: ";
    cin >> word;
    if(validPalindrome(word)) {
        cout << "This word is a palidrome!" << endl;
    }
    else {
        cout << "This word is not a palidrome!" << endl;
    }
}

string reversedString(string word) {
    string newWord = word;
    int j = 0;
    for(int i = word.length()-1; i >= 0; i--) {
        newWord[i] = word[j];
        j++;
    }
    return newWord;
}

void question5() { //will act as a main for question5
    string word;
    cout << "Enter a word: ";
    cin >> word;

    word = reversedString(word);

    cout << "Reversed word: " << word << endl;

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
    //question4();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 5:" << endl;
    cout << "__________________________________________________" << endl << endl;
    question5();
    cout << "__________________________________________________" << endl << endl;
    cout << "Question 6:" << endl;
    cout << "__________________________________________________" << endl << endl;
   // question6();
    cout << "__________________________________________________" << endl << endl;
    return 0;
}