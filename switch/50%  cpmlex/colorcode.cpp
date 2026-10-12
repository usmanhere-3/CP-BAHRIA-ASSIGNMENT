#include <iostream>
using namespace std;

int main() {
    char code;
    cout << "Enter color code (R, G, B): "<<endl;
    cin >> code;
    
    switch(code) {
        case 'R':
        case 'r':
            cout << "Red"<<endl;
            break;
        case 'G':
        case 'g':
            cout << "Green"<<endl;
            break;
        case 'B':
        case 'b':
            cout << "Blue"<<endl;
            break;
        default:
            cout << "Unknown Color"<<endl;
            break;
    }
    return 0;
}