/*
 * fibonacciSequence.cpp
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum, sumMinusOne, sumMinusTwo;

    cout << "Enter number to generate Fibonacci Sequence to: ";
    cin >> n;

    if (n == 0)
        sum = 0;
    else if (n == 1)
        sum = 1;
    else {
        sumMinusOne = 0;
        sumMinusTwo = 1;

        for (int i = 1; i < n; i++) {
            sum = sumMinusOne + sumMinusTwo;
            sumMinusOne = sumMinusTwo;
            sumMinusTwo = sum;
        }
    }

    cout << sum << endl;

    return 0;
}

