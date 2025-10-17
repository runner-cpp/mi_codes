#include <iostream>
using namespace std;

int main(){

    int numOf_students;
    string student_name;
    double math_grade;
    double science_grade;
    double english_grade;
    double average;

    cout << "Enter number of Students: ";
    cin >> numOf_students;
    
    for (int i = 1; i <= numOf_students; i++){
        cout << "\nStudent " << i << " name: ";
        cin >> student_name;
        cout << "Enter grade in Math: ";
        cin >> math_grade;
        cout << "Enter grade in Science: ";
        cin >> science_grade;
        cout << "Enter grade in English: ";
        cin >> english_grade;

        average = (math_grade + science_grade + english_grade)/3;

        if (average >= 90){
            cout << average << " (Excellent)";
        }
        else if (average >= 80){
            cout << average << " (Very Good)";
        }
        else if (average >= 70){
            cout << average << " (Good)";
        }
        else if (average >= 60){
            cout << average << " (Passed)";
        } else {
            cout << average << " (Failed)";
        }

    }

}