#include <iostream>
using namespace std;




int main() {
    
    int n;
    cout << "Enter number: ";  
    cin >> n;

    int x = 0, y = 1, z;
    if(n = 0) {
        cout << x << endl;
    }
    for(int i = 2; i <= n; i++) {
        z = x + y;
        x = y;
        y = z;
        cout << z << " ";
    }
    

    
    return 0;
}