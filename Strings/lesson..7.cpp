#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << " Enter your full nme: ";
    getline(cin, name);
    cout << "Hello, " << name << endl;
    return 0;
}