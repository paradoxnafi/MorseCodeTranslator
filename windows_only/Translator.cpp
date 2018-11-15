#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Translator.h"
using namespace std;

Translator::Translator() { // This function will initialize most of the data.

	ifstream M_data("morse.txt");

	for(int i = 0; i < 46; i++) {
		M_data >> data[i];
	}
}

void Translator::interface() { // This function will controll all tasks.

	cout << endl << "Welcome!!! This is a Morse Code Translator" << endl << endl;
	cout << "[0] About MorseCodeTranslator" << endl;
	cout << "[1] Morse code to English" << endl;
	cout << "[2] English to Morse code" << endl;
	cout << "[3] Work history" << endl;

	cout << "[9] Help" << endl;

	cout << endl << "Choose an option..." << endl;
	cout << "\t: ";

	cin >> choice;

	if(choice == 1) {
		get_morse();
		split_morse();
		to_text();
	} else if(choice == 2) {
		get_text();
		to_morse();
	} else if(choice == 3) {

	}

}

void Translator::get_morse() { // Takes morse data at runtime from user.

	cout << "Type in Morse Code" << endl << "\t: ";
	cin.ignore();
	getline(cin, morse_data);
}

void Translator::split_morse() {

	total_word = -1;
    istringstream ss(morse_data);

    do {
        string word;
        ss >> word;
        total_word += 1;

        store_word[total_word] = word;

    } while (ss);
}

void Translator::to_text() { // Translates morse to text.


	for(int i = 0; i < total_word; i++) {

		if(store_word[i] == "|") {
				cout << " ";
				continue;
		}

		for(int j = 0; j < 46; j++) {

			if(store_word[i] == data[j]) {
				cout << all_char[j];

				if( (j >= 36) && (j <= 41) ) {
					cout << " ";
				}
				break;
			}
		}
	}
}

//******************* Choice 1 is done ******************
//******************* Starting choice 2 *****************

void Translator::get_text() { // Takes text data input at runtime from user.

	cout << "Type in English text" << endl << "\t: ";
	cin.ignore();
	getline(cin, text_data);

}

void Translator::to_morse() {

	for(int i = 0; i < text_data.size(); i++) {

		if(text_data[i] == ' ') {
			cout << "|   ";
		}

		for(int j = 0; j < 46; j++) {
			if( (all_char[j] == text_data[i]) || (all_s_char[j] == text_data[i]) ) {
				cout << data[j] << "   ";
			}
		}
	}
}


Translator::~Translator() { // This is the deconstructor. Now only prints a new line.
	cout << endl;
}