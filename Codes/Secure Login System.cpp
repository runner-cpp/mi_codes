#include <iostream>
using namespace std;

int main() {

	string password;
	string username;
	int attempt = 0;
	const int max_att = 3;

	cout << "Hello! Please enter the following" << endl;

	while (attempt < max_att) {
		cout << "Enter Username: ";
		cin >> username;

		if (username == "CPE123") {
			attempt = 0;

			while (attempt < max_att) {
				cout << "Enter Password: ";
				cin >> password;

				if (password == "nationalU") {
					cout << "Login Successful" << endl;
					return 0;
				}
				else {
					attempt++;
					cout << "Wrong Password!(attempt " << attempt << " of 3)" << endl;
				}
			}
		} else {
			attempt++;
			cout << "Wrong Username!(attempt " << attempt << " of 3)" << endl;
		}
	}

	if (attempt == max_att) {
		cout << "Too many failed attempts. Account locked." << endl;


	}

	return 0;
}