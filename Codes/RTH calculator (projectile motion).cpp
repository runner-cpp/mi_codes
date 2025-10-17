#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    /* 
    Range, Time of Flight, and Maximum height solver

    Example: Determine the Range of a canon ball angled at 60 degrees with respect to the horizontal
    and an initial velocity of 40m/s. Expected answer is approximately 141.24.. meters.
    */
    char x;
    cout << "Which one do you want to solve? \nR - (Range) T - (Time of Flight) H - (Maximum height)" << endl;
    cin >> x;

    float theta, Vi;
    cout << "Enter Theta: ";
    cin >> theta;
    cout << "Enter Initial Velocity: ";
    cin >> Vi;

    cout << fixed << setprecision (4);
    float g = 9.81;
    float rad = theta * 3.1416 / 180.0;
    
    if (x == 'R'){
        float R = ((Vi * Vi) * sin(2 * rad))/g;                     //Formula for Range
        cout << "Range = " << R << " meters" << endl;
    } 
    else if (x == 'T'){
        float T = ((2 * Vi) * (sin(rad)))/g;                        //Formula for Time of Flight
        cout << "Time of Flight = " << T << " seconds" << endl;
    } 
    else if (x == 'H') {
        float H = ((Vi * sin(rad)) * (Vi * sin(rad))) / (2 * g);    //Formula for Maximum Height
        cout << "Maximum Height = " << H << " meters" << endl;
    } else {
        cout << "It seems that is different? " << endl;
        return 0;
    }
    return 0;
}


