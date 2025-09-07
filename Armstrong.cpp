#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, n = 0;
    double sum = 0.0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    // Calculate sum of the digits raised to the power n
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
