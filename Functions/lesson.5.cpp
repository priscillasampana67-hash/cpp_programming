#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    int num = 4;
    cout << "square: " << square(num) << endl;
    cout << "sum: " << add(3 ,7) << endl;
    return 0;
}