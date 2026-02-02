#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int num = 4;
    int result = square(num);
    cout << "The square of " << num << " is " << result << endl;
    return 0;
}