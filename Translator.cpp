#include <iostream>
#include <string>
#include <sstream>
#include "Translator.h"
using namespace std;

Translator::Translator() {

	data[0] = ".-";
	data[1] = "-...";
	data[2] = "-.-.";
	data[3] = "-..";
	data[4] = ".";
	data[5] = "..-.";
	data[6] = "--.";
	data[7] = "....";
	data[8] = "..";
	data[9] = ".---";
	data[10] = "-.-";
	data[11] = ".-.."; // A to Z
	data[12] = "--";
	data[13] = "-.";
	data[14] = "---";
	data[15] = ".--.";
	data[16] = "--.-";
	data[17] = ".-.";
	data[18] = "...";
	data[19] = "-";
	data[20] = "..-";
	data[21] = "...-";
	data[22] = ".--";
	data[23] = "-..-";
	data[24] = "-.--";
	data[25] = "--..";

	data[26] = "-----";
	data[27] = ".----";
	data[28] = "..---";
	data[29] = "...--";
	data[30] = "....-";  // all numbers 0 to 9
	data[31] = ".....";
	data[32] = "-....";
	data[33] = "--...";
	data[34] = "---..";
	data[35] = "----.";

	data[36] = ".-.-.-"; // .
	data[37] = "--..--"; // ,
	data[38] = "..--.."; // ?
	data[39] = "-..-."; // FSLASH
	data[40] = ".--.-."; // @

}

void Translator::interface() {

	Translator obj;

	cout << endl << "Welcome!!! This is a Morse Code Translator" << endl << endl;
	cout << "[0] About MorseCodeTranslator" << endl;
	cout << "[1] Morse code to English" << endl;
	cout << "[2] English to Morse code" << endl;
	cout << "[3] Read input from a file" << endl;
	cout << "[4] Play a Game" << endl;
	cout << "[9] Help" << endl;

	cout << endl << "Choose an option..." << endl;
	cout << "\t: ";

	cin >> choice;

	if(choice == 1) {
		obj.get_morse();
		obj.split_string();
		obj.to_text();
	}

}

void Translator::get_morse() {

	cout << "Type in Morse Code" << endl << "\t: ";
	cin.ignore();
	getline(cin, morse_data);
}

void Translator::split_string() {

	total_word = -1;
    istringstream ss(morse_data);

    do {
        string word;
        ss >> word;
        total_word += 1;

        store_word[total_word] = word;

    } while (ss);
}

void Translator::to_text() {


	for(int i = 0; i < total_word; i++) {
		for(int j = 0; j < 41; j++) {

			if(store_word[i] == "|") {
				cout << " ";
			} else if(store_word[i] == data[j]) {
				cout << all_char[j];
			}
		}
	}
}

Translator::~Translator() {
	cout << endl;
}