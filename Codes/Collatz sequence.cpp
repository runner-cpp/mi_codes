#include <iostream>

using namespace std;

int main(){

    // Ask for user's first number.
    long long n;
    cout << "Enter n: ";
    cin >> n;

    long long steps = 0;

    // Loop until n becomes 1 (Collatz Sequence)
    while (n != 1){
        cout << n << endl;
        if (n % 2 == 1){            // If odd
            n = 3 * n + 1;
        } else {
            n = n/2;                // if even
        }
        steps++;
    } 
    cout << n << " ";
    cout << "\nSteps: " << steps;
    return 0;
}

