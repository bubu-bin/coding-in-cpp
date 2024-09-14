#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Add two numbers" << endl;

    cout << "Enter first number and hit enter" << endl;
    cin >> num1;

    cout << "Enter second number and hit enter" << endl;
    cin >> num2;

    int result = num1 + num2;
    cout << "Result is " << result << endl;

    return 0;
}