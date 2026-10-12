#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number (1-3): "<<endl;
    cin >> num;
    
    switch(num) {
        case 1:
            cout << "One"<<endl;
            break;
        case 2:
            cout << "Two"<<endl;
            break;
        case 3:
            cout << "Three"<<endl;
            break;
        default:
            cout << "Number out of range"<<endl;
            break;
    }
    return 0;
}