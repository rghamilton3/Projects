/*
 * findPIToNthDigit.cpp
 */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;

    cout << "Please enter the number to generate Pi to: ";
    cin >> n;

    cout.precision(n);
    cout << "Pi: " << fixed << M_PIl << endl;

    return 0;
}
