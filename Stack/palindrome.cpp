#include <iostream>
using namespace std;

int main() {
    int n, temp, digit;
    int stack[100];
    int top = -1;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    // Push digits into stack
    while (temp > 0) {
        digit = temp % 10;
        top++;
        stack[top] = digit;
        temp = temp / 10;
    }

    temp = n;

    // Compare digits with stack
    while (temp > 0) {
        digit = temp % 10;

        if (digit != stack[top]) {
            cout << "Not a palindrome";
            return 0;
        }

        top--;
        temp = temp / 10;
    }

    cout << "Palindrome";

    return 0;
}