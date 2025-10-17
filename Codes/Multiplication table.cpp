#include <iostream>
using namespace std;

int main(){

    int table_size;

    do {
        cout << "Enter the size of the Multiplication Table: ";
        cin >> table_size;

        if (table_size < 1 || table_size > 50){
            cout << "Invalid number size! Please enter number in range 1 to 50." << endl;
        }
    } while (table_size < 1 || table_size > 50);
    
        int table[50][50];

        for (int i = 0; i < table_size; i++){
            for (int j = 0; j < table_size; j++){
                table [i][j] = (i + 1) * (j + 1);
            }
        }

        cout << "\n Multiplacation Table:\n";
        for (int i = 0; i < table_size; i++){
            for (int j = 0; j < table_size; j++){
                cout << table[i][j] << "\t";
            }
            cout << endl;
        }
    return 0;
}
    
