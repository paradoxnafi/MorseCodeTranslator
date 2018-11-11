#include <iostream>
#include <fstream>
#include <string>
#include "Login.h"
#include <conio.h>

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
		getpass();

		cout << "\nUsername: " << USERNAME << endl;
		cout << "Password: " << PASSWORD << endl;
	}

	if(PASSWORD == admin) {
		cout << "Granted" << endl;
	}
}

string Login::getpass() {

    unsigned char ch = 0;

    while((ch=getch())!=RETURN) {

        if(ch==BACKSPACE) {

            if(PASSWORD.length()!=0) {
                cout <<"\b \b";
                PASSWORD.resize(PASSWORD.length()-1);
            }
        } else {
               PASSWORD+=ch;
                   cout <<'*';
        }
    }

    cout << endl;
    return PASSWORD;
}
