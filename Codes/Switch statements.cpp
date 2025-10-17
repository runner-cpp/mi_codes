#include <iostream>
using namespace std;

int main(){

	int speed;
	float temp;
	
	cout << "Enter temperature of the room: ";
	cin >> temp;
	
	cout << "Enter speed level (1-5): ";
	cin >> speed;
	
	switch (speed){
	
		case 1:
			cout << "Very Low\n";
			if (temp < 20){
				cout << "Cooling not needed\n";
				} else {
					cout << "Fan running at Very Low speed" << endl;
					}
			break;
			case 2:
			cout << "Low\n";
			if (temp < 20){
				cout << "Cooling not needed\n";
				} else {
					cout << "Fan running at Low speed" << endl;
					}
			break;
			case 3:
			cout << "Medium\n";
			if (temp < 20){
				cout << "Cooling not needed\n";
				} else {
					cout << "Fan running at Medium speed" << endl;
					}
			break;
			case 4:
			cout << "High\n";
			if (temp < 20){
				cout << "Cooling not needed\n";
				} else {
					cout << "Fan running at High speed" << endl;
					}
			break;
			case 5:
			cout << "Maximum\n";
			if (temp < 20){
				cout << "Cooling not needed\n";
				} else {
					cout << "Fan running at Maximum speed" << endl;
					}
			break;
			default:
				cout << "Invalid speed level\n";
				break;
	}
	return 0;
}