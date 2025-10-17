#include <iostream>
#include <string>
using namespace std;

int main(){

    string username;
    int password;
    bool login = false;
    char decision;

    while (!login){
        cout << "Enter Username: ";
        cin >> username;
        
        cout << "Enter Password: ";
        cin >> password;
        
        if (username == "student" && password == 1234){
            cout << "Access Granted" << endl;
            login = true;
        } else {
            cout << "Incorrect Username or Password" << endl;
        }    
    } 

    do {
        double grades[5];
        double equivalent[5];
        double total = 0;

        for (int i = 0; i < 5; i++){
            cout << "Enter Grade (0-100) " << i + 1 << " : ";
            cin >> grades[i];

            if (grades[i] >= 96 && grades[i] <= 100){
                equivalent[i] = 4.0;} 
            else if (grades[i] >= 90 && grades[i] <= 95){
                equivalent[i] = 3.5;}
            else if (grades[i] >= 84 && grades[i] <= 89){
                equivalent[i] = 3.0;} 
            else if (grades[i] >= 78 && grades[i] <= 83){
                equivalent[i] = 2.5;} 
            else if (grades[i] >= 72 && grades[i] <= 77){
                equivalent[i] = 2.0;} 
            else if (grades[i] >= 66 && grades[i] <= 71){
                equivalent[i] = 1.5;} 
            else if (grades[i] >= 59 && grades[i] <= 65){
                equivalent[i] = 1.0;} 
            else {
                equivalent[i] = 0; // R
            }                                                      
            total += equivalent[i];
        }
        
        double GPA = total / 5;

        if (GPA >= 3.5){
            cout << "( " << GPA << " ) President's Lister" << endl;
        } 
        else if (GPA >= 3.0){
            cout << "( " << GPA << " ) Dean's Lister" << endl;
        }
        else if (GPA >= 2.0){
            cout << "( " << GPA << " ) Regular Standing" << endl;
        } else {
            cout << "Warning Status" << endl;
        }

        do{
            cout << "Do you want to enter another set of grades? (Y/N)" << endl;
            cin >> decision;
        
        if (decision != 'N' && decision != 'Y')
            cout << "Unknown input, Please try again." << endl;
        } while (decision != 'N' && decision != 'Y');
    
    } while (decision == 'Y');

    if (decision == 'N'){
        cout << "Closing Student Portal";
    }

    return 0;
}
        