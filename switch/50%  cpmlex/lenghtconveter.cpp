#include <iostream>
using namespace std;

int main() {
    int choice;
    float length;
    cout << "1. Meter to CM\n2. CM to Meter\n3. KM to Meter\nEnter choice: "<<endl;
    cin >> choice;
    cout << "Enter length: "<<endl;
    cin >> length;
    
    switch(choice) {
        case 1:
            cout << length * 100 << " CM"<<endl;
        case 2:
            cout << length / 100 << " Meters"<<endl;
            break;
        case 3:
            cout << length * 1000 << " Meters"<<endl;
            break;
        default:
            cout << "Invalid Choice"<<endl;
            break;
    }
    return 0;
}