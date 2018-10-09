#ifndef TRANSLATOR_H
#define TRANSLATOR_H

class translator {

private:
	const std::string A = ".-";
/*	const string B =  '-...'
	const string C = '-.-.'
	const string D = '-..'
	const string E = '.'
	const string F = '..-.'
	const string G = '--.'
	const string H = '....'
	const string I = '..'
	const string J = '.---'
	const string K = '-.-'
	const string L = '.-..'
	const string M = '--'
	const string N = '-.'
	const string O = '---'
	const string P = '.--.'
	const string Q = '--.-'
	const string R = '.-.'
	const string S = '...'
	const string T = '-'
	const string U = '..-'
	const string V = '...-'
	const string W = '.--'
	const string X = '-..-'
	const string Y = '-.--'
	const string Z = '--..'

	const string _1 = '.----'
	const string _2 = '..---'
	const string _3 = '...--'
	const string _4 = '....-'
	const string _5 = '.....'
	const string _6 = '-....'
	const string _7 = '--...'
	const string _8 = '---..'
	const string _9 = '----.'
	const string _0 = '-----'

	const string PERID = '.-.-.-'
	const string COMMA = '--..--'
	const string QMARK = '..--..'
	const string FSLASH = '-..-.'
	const string ATR = '.--.-.'
*/
public:
	void to_morse() {
		std::string u_input;
		getline(cin, u_input);

		if(u_input == A) {
			std::cout << "Damn!";
	}

	void to_text();

};

#endif

void translator::to_morse() {

	string u_input;
	getline(cin, u_input);

	if(u_input == A) {
		cout << "Damn!";
	}
}