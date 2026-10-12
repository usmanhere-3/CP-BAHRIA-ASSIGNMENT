#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Check Balance\n2. Withdraw\n3. Deposit\nEnter choice: "<<endl;
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Your Balance is $1000"<<endl;
            break;
        case 2:
            cout << "Withdrawal section selected."<<endl;
            break;
        case 3:
            cout << "Deposit section selected."<<endl;
            break;
        default:
            cout << "Invalid Transaction"<<endl;
            break;
    }
    return 0;
}