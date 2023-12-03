#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char calculateGrade(double percentage) {
    if(percentage >= 90) return 'A';
    if(percentage >= 80) return 'B';
    if(percentage >= 70) return 'C';
    if(percentage >= 60) return 'D';
    return 'F';
}

int main() {
    ifstream inFile("lab10data.txt");
    const int numofAns = 20;
    char* correctAns = new char[numofAns + 1];
    inFile.getline(correctAns, numofAns + 1);
    string studentID;
    char* studentAns = new char[numofAns + 1];
    cout << "__________________________________" << endl << endl;
    while(inFile >> studentID) {
        inFile.ignore();
        inFile.getline(studentAns, numofAns + 1, '\n');

        int score = 0;
        for(int i = 0; i < numofAns; i++) {
            if(studentAns[i]=='\0' || studentAns[i]==' ') {
                continue;
            }
            else if(studentAns[i] == correctAns[i]) {
                score += 2;
            }
            else {
                score -= 1;
            }
            
        }
        double percentage = static_cast<double>(score) / (2 * numofAns) * 100;
        char grade = calculateGrade(percentage);

        cout << studentID << ": ";

        for(int i = 0; i < numofAns; i++) {
            if(studentAns[i] != '\0') {
                cout << studentAns[i];
            }
            else {
                cout << ' ';
            }
        }
        cout << endl << "Score: " << score << "/40" << " (" << percentage << "%)" << endl << "Grade: " << grade << endl;
        cout << "__________________________________" << endl << endl;
    }

    delete[] correctAns;
    delete[] studentAns;


}