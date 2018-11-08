#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
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
		for(int i = 0; i < 100; i++) {
			PASSWORD[i] = getch();
			putch('*');
			if(PASSWORD[i] == 13) {
				break;
			}
		}

		cout << "\nUsername: " << USERNAME << endl;
		cout << "Password: " << PASSWORD << endl;
	}

	if(PASSWORD == admin) {
		cout << "Granted" << endl;
	}
}
/*
char s[10] = { 0 };
    int i;
    for (i = 0; i < 10;i++) {
        s[i] = getch(); putch('*');
        if (s[i] == 13) break;
    };
    printf("\nYour pass is %s", s);
    getchar();
*/