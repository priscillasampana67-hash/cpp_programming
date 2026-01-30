#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Provide your height: ";
    cin >> height;

    if (height >= 2.0 ) {
        cout << "You are tall. " << endl;
    } else {
        cout << "You are short. " << endl;
    }

    return 0;
}