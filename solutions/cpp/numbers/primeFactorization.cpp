/*
 * primeFactorization.cpp
 * Prime factorization using the Sieve of Eratosthenes 
 */

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    // Input: an integer n > 1
    int n;
    
    cout << "Enter number to factorize: ";
    cin >> n;
    cout << n << ": " << endl;

    // Let A be an array of Boolean values, indexed by integers 2 to n, initially all set to true.
    vector<bool> A (n, true); 

    int c = 0;

    // for i = 2, 3, 4, ..., not exceeding √n
    for (int i = 2; i < int(sqrt(n)); i++) {

        cout << "i: " << i << endl;

        if (A[i] == true) {

            // for j = i^2, i^2+i, i^2+2i, i^2+3i, ..., not exceeding n
            for (int j = (i * i); j < n; j += (c * i)) {

                cout << "j: " << j << endl; 

                A[j] = false;

                c++;
            }
        }
    }

    
    // Use a vector iterator to print primes
    vector<bool>::iterator it = A.begin();
    c = 0;
    while (it != A.end()) {
        if (c < 2)
            continue;

        if (*it == true)
            cout << c << " ";

        c++;
        it++;
    }

    return 0;
}
