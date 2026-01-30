#include <iostream>
using namespace std;

int sqaure(int x) {
    return x * x;
}
int main() {
    int num = 4;
    int result = sqaure(num);
    cout << "The square of " << num << " is " << result << endl;
    return 0;
}