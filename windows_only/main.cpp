// Working on it.
// MorseCodeTranslator

#include <iostream>
#include <string>
#include <fstream>
#include "Login.h"
#include "Translator.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;

void logo();

int main()
{
//	Translator obj;

//	obj.interface();
	logo();

	Login login_obj;

	return 0;
}

// Implementatio of logo function
void logo() {
	char c;

	ifstream logo_file("logo");

	while(logo_file.get(c)) {
		cout << c;
	}
}
