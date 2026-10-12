#include <iostream>
using namespace std;

int main() {
    int choice;
    float r, l, w, b, h;
    cout << "1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: "<<endl;
    cin >> choice;
    
    switch(choice) {
        case 1: 
            cout << "Enter radius: "<<endl;
            cin >> r;
            cout << "Area: " << 3.14 * r * r<<endl;
            break;
        case 2: 
            cout << "Enter length and width: "<<endl;
            cin >> l >> w;
            cout << "Area: " << l * w<<endl;
            break;
        case 3: 
            cout << "Enter base and height: "<<endl;
            cin >> b >> h;
            cout << "Area: " << 0.5 * b * h<<endl;
            break;
        default:
            cout << "Invalid Choice"<<endl;
            break;
    }
    return 0;
}