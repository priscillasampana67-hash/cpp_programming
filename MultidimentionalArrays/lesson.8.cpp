#include <iostream>
using namespace std;

int main() {
    float height[3][6] = {
        {2.2, 6.4, 1.0, 4.3, 0.8, 1.7},
        {7.1, 2.6, 3.3, 7.4, 9.4, 5.5},
        {8.5, 7.4, 9.0, 4.2, 7.6, 4.9},
    };

    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 6; j++) {
                cout << height[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    } 

    