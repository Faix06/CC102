#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows for the increment and decrement

    // Increment part
    for (int i = 1; i <= n; i++) {
        // Print the # symbols
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        // Print the ^ symbol
        cout << "^" << endl;
    }

    // Decrement part
    for (int i = n - 1; i >= 1; i--) {
        // Print the # symbols
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        // Print the ^ symbol
        cout << "^" << endl;
    }

    return 0;
}