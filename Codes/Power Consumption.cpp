#include <iostream>
using namespace std;

int main(){

    int power[3][4];  //[3]-Processors [4]- Workload Level

    for (int i = 0; i < 3; i++){
        cout << "\nProcessor " << i+1 << ": " << endl;
        for (int j = 0; j < 4; j++){
            cout << "Enter Workload Level " << j+1 << endl;
            cin >> power[i][j];
        }
    }

    // displaying

    cout << "\nPower Consumption" << endl;
    cout << "Processors #    W1    W2    W3    W4" << endl;

    for (int i = 0; i < 3; i++){
        cout << "Processor " << i+1 << "     ";
        for (int j = 0; j < 4; j++){
            cout << power[i][j] << "    ";
        }
        cout << endl;
    }
    cout << endl;
    //average

    double sum;
    double average;
    double averageP[3];
    double highest_avg = 0;
    int highestP = 0;

    for (int i = 0; i < 3; i++){
        sum = 0;
        for (int j = 0; j < 4; j++){
            sum += power[i][j];
        }
        average = sum/4;
        cout << "Processor " << i+1 << ": " << average << " Watts" << endl;
        averageP[i] = average;

        if (averageP[i] > highest_avg){
            highest_avg = averageP[i];
            highestP = i;
        }
    }
    cout << endl;
    cout << "The Processor that consumed the highest Total power of " << highest_avg << "W is: Processor " << highestP << endl;
    return 0;

}