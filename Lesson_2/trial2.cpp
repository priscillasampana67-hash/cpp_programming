#include <iostream>
using namespace std;

int main () {
    int age = 19;
    float height = 1.34;
    char grade = 'B';
    string name = "Baby";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;

    cout << "Initial Height" << height << endl;
    height = 1.50;
    cout << "updated height: "<< height << endl;

    cout << "Initial Name: " << name << endl;
    name = "Priscy";
    cout << "updateed name: " << name << endl;
    return 0;
}