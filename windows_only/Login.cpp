#include <iostream>
#include <fstream>
#include <string>
#include "Login.h"
#include "Translator.h"
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Login::Login() {

	while(ask) {
		cout << "Morse Code Translator\n\n";

		cout << "Username: ";
	//	cin.ignore();
		getline(cin, USERNAME);

		cout << "Password: ";
		PASSWORD = getpass();
		cout << USERNAME << "\t" << PASSWORD << endl;

		if( (USERNAME == "admin") && (PASSWORD == "AdmiN") ) {
			Translator T_obj;
			T_obj.interface();
		} else {
			cout << "Wrong Password\n";

		}

		cout << "Do you want to try again[0/1]: ";
		cin >> ask;
		cout << endl;
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