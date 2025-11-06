#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int highest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        if (num1 > num3) {
            highest = num1;
        }
        else {
            highest = num3;
        }
    }
    else {
        if (num2 > num3) {
            highest = num2;
        }
        else {
            highest = num3;
        }
    }

    cout << "The highest number is: " << highest << endl;

    return 0;
}
