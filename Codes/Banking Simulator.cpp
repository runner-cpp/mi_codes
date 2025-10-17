#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const int accountNum = 5;
    double balance[accountNum] = {10000, 15000, 20000, 30000, 50000};
    int choice;
    int acc_choice;
    double amount;
    int target;

    do{
    cout << "\n============MENU==============" << endl;
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Transfer between accounts\n";
    cout << "4. Display all balance\n";
    cout << "5. Exit\n";
    cout << "Enter choice (1-5): ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "\nEnter Account Number: ";
            cin >> acc_choice;
            if (acc_choice < 1 || acc_choice > 5){
                cout << "\nInvalid Choice! Please try again.";
                break;
            }
            cout << "Enter amount to be Deposited: ";
            cin >> amount;
            if (amount < 1){
                cout << "Amount must be Positive!!" << endl;
                break;
            }
            balance[acc_choice - 1] += amount;
            cout << "\nDeposit Succesfully!";
            cout << "\nNew Balance: " << balance[acc_choice - 1] << endl;
            break;
        
        case 2:
            cout << "\nEnter Account Number: ";
            cin >> acc_choice;
            if (acc_choice < 1 || acc_choice > 5){
                cout << "Invalid Choice! Please try again.";
                break;
            }
            cout << "Enter amount to be Withdraw: ";
            cin >> amount;
            if (amount < 1){
                cout << "Withdrawal not possible!!";
                break;
            }
            if (amount > balance[acc_choice - 1]){
                cout << "Insufficient funds! " << endl;
                break;
            }
            balance[acc_choice - 1] -= amount;
            cout << "\nWithdraw Succesfully!";
            cout << "\nNew balance: " << balance[acc_choice - 1] << endl;
            break;
        
        case 3:
            cout << "\nEnter source Account: ";
            cin >> acc_choice;
            cout << "Enter target Account: ";
            cin >> target;
            if (acc_choice < 1 || acc_choice > 5 || target < 1 || target > 5){
                cout << "Invalid Choice! Please try again.";
                break;
            }
            if (acc_choice == target){
                cout << "Transferring to the same account is not possible!";
                break;
            }
            cout << "Enter amount to be transfer: ";
            cin >> amount;
            if (amount <= 0){
                cout << "Amount to be transfer is not possible!";
                break;
            }
            if (amount > balance[acc_choice - 1]){
                cout << "Insufficient funds!";
                break;
            } else {
                balance[acc_choice - 1] -= amount;
                balance[target - 1] += amount;
                cout << "\nTransferred succesfully!" << endl;
                cout << "New balance (Source Account): " << balance[acc_choice - 1] << endl;
                cout << "New balance (Target Account): " << balance[target - 1] << endl;
                break;
            }

        case 4:
            cout << fixed << setprecision(2);
            cout << "==========================================\n";
            cout << left << setw(20) << "Account Number" << setw(20) << "Account Balance" << endl;
            for (int i = 0; i < accountNum; i++){
                cout << left << setw(20) << i + 1 << setw(20) << balance[i] << endl;
            }
            cout << "==========================================\n";
            break;
            
        case 5:
            cout << "\nThanks for using our Bank!!";
            break;

        default:
            cout << "\nInvalid choice! Please Try Again!";
            break;
        }   
    } while (choice != 5);
    return 0;
}