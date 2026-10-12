#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    cout << "Enter operator (+, -, *, /): "<<endl;
    cin >> op;
    cout << "Enter two numbers: "<<endl;
    cin >> num1 >> num2;
    
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2<<endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2<<endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2<<endl;
            break;
        case '/':
            cout << "Result: " << num1 / num2<<endl;
            break;
        default:
            cout << "Invalid Operator"<<endl<<endl;
            break;
    }
    return 0;
}