#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 8; i++) {
        for (int j = i; j < 8; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
