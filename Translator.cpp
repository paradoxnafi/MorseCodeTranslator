#include <iostream>
#include <string>
#include <sstream>
#include "Translator.h"
#include "Game.h"
using namespace std;

Translator::Translator() { // This function will initialize most of the data.

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
	data[39] = "..--."; // !
	data[40] = "---..."; // :
	data[41] = "-.-.-"; // ;
	data[42] = "-..-."; // FSLASH ////////
	data[43] = ".--.-."; // @     //////// {No space after them}
	data[44] = ".----."; // '     ////////
	data[45] = "-....-"; // -     ////////
	data[46] = "-.--.-"; // ()  *** Currently not supported***
 
}

void Translator::interface() { // This function will controll all tasks.

	Translator Tobj;
	Game Gobj;

	cout << endl << "Welcome!!! This is a Morse Code Translator" << endl << endl;
	cout << "[0] About MorseCodeTranslator" << endl;
	cout << "[1] Morse code to English" << endl;
	cout << "[2] English to Morse code" << endl;
	cout << "[3] Work history" << endl;
	cout << "[4] Play a Game" << endl;
	cout << "[9] Help" << endl;

	cout << endl << "Choose an option..." << endl;
	cout << "\t: ";

	cin >> choice;

	if(choice == 1) {
		Tobj.get_morse();
		Tobj.split_string();
		Tobj.to_text();
	} else if(choice == 2) {
		Tobj.get_text();
	} else if(choice == 3) {

	} else if(choice == 4) {
		do {
			Gobj.controller();
			cout << "Do you want to play again [Y/N]: ";
			cin >> ask;
		} while( (ask == 'Y')||(ask == 'y') );
	}

}

void Translator::get_morse() { // Takes morse data at runtime from user.

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


Translator::~Translator() { // This is the deconstructor. Now only prints a new line.
	cout << endl;
}