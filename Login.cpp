#include <iostream>
#include <fstream>
#include <string>
#include "Login.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
//using std::getline; // Works fine without it

Login::Login() {

	cout << "Morse Code Translator\n\n";
	cout << "[1] Login\n";
	cout << "[2] Signup\n";
	cout << "\t:";
	cin >> choice;

	if(choice == 1) {
		cout << "Username: ";
		cin.ignore();
		getline(cin, USERNAME);

		cout << "Password: ";
		//
		getline(cin, PASSWORD);
	}

	if(PASSWORD == admin) {
		cout << "Granted" << endl;
	}
}
