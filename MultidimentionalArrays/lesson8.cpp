#include <iostream>
using namespace std;

int main() {
    int scores[2][3] = {
        {80, 85, 90},
        {70, 75, 88}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}