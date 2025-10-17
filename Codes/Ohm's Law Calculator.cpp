#include <iostream>
#include <string>
using namespace std;

int main() {

	string variable;
	double value, V, I, R;

	do {
		cout << "Variable to compute (Voltage, Current, Resistance)? ";
		cin >> variable;

		if (variable != "Voltage" && variable != "Current" && variable != "Resistance") {
			cout << "Invalid! Try again.\n";
		}
	}
	while (variable != "Voltage" && variable != "Current" && variable != "Resistance");

	cout << "You chose: " << variable << endl;


	if (variable == "Voltage") {

		cout << "Missing values: Current & Resistance" << endl;
		cout << "Enter Current value: ";
		cin >> I;

		cout << "Enter Resistance value: ";
		cin >> R;
		V = I*R;

		cout << "Voltage: " << V << " V" << endl;
	}
	else if (variable == "Current") {

		cout << "Missing values: Voltage & Resistance" << endl;
		cout << "Enter Voltage value: ";
		cin >> V;

		cout << "Enter Resistance value: ";
		cin >> R;
		I = V/R;

		cout << "Current: " << I << " A" << endl;
	}
	else { // resistance

		cout << "Missing values: Voltage & Current" << endl;
		cout << "Enter Voltage value: ";
		cin >> V;

		cout << "Enter Current value: ";
		cin >> I;
		R = V/I;

		cout << "Resistance: " << R << " N)" << endl;
	}


	return 0;
}