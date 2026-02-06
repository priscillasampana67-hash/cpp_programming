#include <iostream>
using namespace std;
 int main() {
    int x = 10;
    int* p = &x;

    *p = 25;  // change x using the pointer

    cout << "x is now: " << x << endl;
    return 0;
 }