/*
 * findeToNthDigit.cpp
 */

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    long double e = exp (1.0);

    cout << "Please enter the number to generate e to: ";
    cin >> n;

    cout.precision(n);
    cout << "e: " << fixed << e << endl;

    return 0;
}
