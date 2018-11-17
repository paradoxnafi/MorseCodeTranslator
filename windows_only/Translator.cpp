#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Translator.h"
#include "Login.h"
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
	cout << "[3] Read from a file" << endl;
	cout << "[4] Help" << endl;
	cout << "[5] Exit" << endl;

	cout << endl << "Choose an option..." << endl;
	cout << "\t: ";

	cin >> choice;

	if(choice == 0) {
		show_about();
	} else if(choice == 1) {
		get_morse();
		split_morse();
		to_text();
		want_to_write1();
	} else if(choice == 2) {
		get_text();
		to_morse();
		want_to_write2();
	} else if(choice == 3) {

	} else if(choice == 4) {
		show_help();
	} else if(choice == 5) {
		cout << "\nAre you sure?\n";
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
	cout << endl;
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

	cout << endl;
}

void  Translator::want_to_write1() {
	int t_ask;
	cout << "Do you want to write this to a file[0/1]: ";
	cin >> t_ask;

	if(t_ask == 1) {
		cout << "File name: ";
		cin >> s_file_name;

		ofstream file1;
		file1.open(s_file_name.c_str());
		
		for(int i = 0; i < total_word; i++) {

			if(store_word[i] == "|") {
					file1 << " ";
					continue;
			}

			for(int j = 0; j < 46; j++) {

				if(store_word[i] == data[j]) {
					file1 << all_char[j];

					if( (j >= 36) && (j <= 41) ) {
						file1 << " ";
					}
					break;
				}
			}
		}
	}
}

void Translator::want_to_write2() {

	int t_ask;
	cout << "Do you want to write this to a file[0/1]: ";
	cin >> t_ask;

	if(t_ask == 1) {
		cout << "File name: ";
		cin >> s_file_name;

		ofstream file2;
		file2.open(s_file_name.c_str());
			
		for(int i = 0; i < text_data.size(); i++) {

			if(text_data[i] == ' ') {
				file2 << "|   ";
			}

			for(int j = 0; j < 46; j++) {
				if( (all_char[j] == text_data[i]) || (all_s_char[j] == text_data[i]) ) {
					file2 << data[j] << "   ";
				}
			}
		}
	}
}

void Translator::show_about() {
	char c;

	ifstream about_file("about.txt");

	while(about_file.get(c)) {
		cout << c;
	}
}

void Translator::show_help() {
	char c;

	ifstream help_file("help.txt");

	while(help_file.get(c)) {
		cout << c;
	}
}

void Translator::show_file() {
	char c;

	cout << "File name: ";
	cin >> r_file_name;

	ifstream sh_file(r_file_name.c_str());

	while(sh_file.get(c)) {
		cout << c;
	}
}