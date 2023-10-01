#include <iostream>

using namespace std;

void question1() { 
    int i;

    cout << "Enter a number: ";
    cin>>i;
    while(cin) {
        int a;
        a = a + i;
        cout << a << endl;
        cout << "Enter a number: ";
        cin>>i;   
    }
}

void question2() {
    int n;
    int num = 1;
    cout << "Enter number: ";  
    cin >> n;

    
    for(int i=1; i<n; i=i+1) {
        num = (num-1) + (num-2);
        cout << num << " ";
    }
    cout << endl;
    

}

void question3() {

}

void question4() {


}

int main() {
    cout << "_____________________________________" << endl << endl;
    cout << "Question1: " << endl;
    cout << "_____________________________________" << endl;
    question1(); 
    cout << "_____________________________________" << endl << endl;
    cout << "Question2: " << endl;
    cout << "_____________________________________" << endl;
    question2(); 
    cout << "_____________________________________" << endl << endl;
    cout << "Question3: " << endl;
    cout << "_____________________________________" << endl;
    question3(); 
    cout << "_____________________________________" << endl << endl;
    cout << "Question4: " << endl;
    cout << "_____________________________________" << endl;
    question4(); 
    cout << "_____________________________________" << endl << endl;

    return 0;
}