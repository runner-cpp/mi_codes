#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    const int num_ofStudent = 5;
    string name[num_ofStudent];
    double grade[num_ofStudent];
    double total = 0, highest_grade = 0, lowest_grade = 100;

    cout << "Enter the names and grades of 5 students:" << endl;

    for (int i = 0; i < num_ofStudent; i++){
        cout << "\nStudent " << i + 1 << " name: ";
        cin >> name[i];
        cout << "Student " << i + 1 << " grade: ";
        cin >> grade[i];
    }

    for (int i = 0; i < num_ofStudent; i++){
        total += grade[i];

        if (grade[i] > highest_grade){
            highest_grade = grade[i];
        }
        if (grade[i] < lowest_grade){
            lowest_grade = grade[i];
        }
    }

    double average = total / num_ofStudent;

    cout << "===============================================\n";
    cout << left << setw(20) << "Student Number" << setw(20) << "Name" << setw(10) << "Grade" << endl;
    cout << "===============================================\n";

    for (int i = 0; i < num_ofStudent; i++){
        cout << left << setw(20) << i + 1 << setw(20) << name[i] << setw(10) << grade[i] << endl;
    }
    cout << "===============================================\n";
    cout << "Class Average: " << average << endl;
    cout << "Highest Grade: " << highest_grade << endl;
    cout << "Lowest Grade: " << lowest_grade << endl;

    return 0;
}