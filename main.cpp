// Working on it.
// MorseCodeTranslator

#include <bits/stdc++.h>
using namespace std;

class translator {
	private:
		const string letters[27][10];

		letters[][]
		

		const string _1 = ".----";
		const string _2 = "..---";
		const string _3 = "...--";
		const string _4 = "....-";
		const string _5 = ".....";
		const string _6 = "-....";
		const string _7 = "--...";
		const string _8 = "---..";
		const string _9 = "----.";
		const string _0 = "-----";

		const string PERID = ".-.-.-";
		const string COMMA = "--..--";
		const string QMARK = "..--..";
		const string FSLASH = "-..-.";
		const string ATR = ".--.-.";


	public:
		void to_morse() {
			string u_input;
			getline(cin, u_input);

			if(u_input == A) {
				cout << A;
			}
		}
};

int main()
{
	translator obj;

	obj.to_morse();
	cout << endl;

	return 0;
}

/*
const string A = ".-";
		const string B = "-...";
		const string C = "-.-.";
		const string D = "-..";
		const string E = ".";
		const string F = "..-.";
		const string G = "--.";
		const string H = "....";
		const string I = "..";
		const string J = ".---";
		const string K = "-.-";
		const string L = ".-..";
		const string M = "--";
		const string N = "-.";
		const string O = "---";
		const string P = ".--.";
		const string Q = "--.-";
		const string R = ".-.";
		const string S = "...";
		const string T = "-";
		const string U = "..-";
		const string V = "...-";
		const string W = ".--";
		const string X = "-..-";
		const string Y = "-.--";
		const string Z = "--..";

		const string _1 = ".----";
		const string _2 = "..---";
		const string _3 = "...--";
		const string _4 = "....-";
		const string _5 = ".....";
		const string _6 = "-....";
		const string _7 = "--...";
		const string _8 = "---..";
		const string _9 = "----.";
		const string _0 = "-----";

		const string PERID = ".-.-.-";
		const string COMMA = "--..--";
		const string QMARK = "..--..";
		const string FSLASH = "-..-.";
		const string ATR = ".--.-.";


print('''
Welcome from paradox codes. This is Morse Code Translator.
You can either translate Morse Code to regular English text or English text to Morse Code.
Remember that all English letters must be in captital form.
Make your choice...

[1] Morse Code to English text.
[2] English text to Morse Code.
''')

choice = int(input('> '))
counter = 0

if choice is 1:
	MorseData = input('Type in Morse Code to convert it to regular English text\n> ')

	splited_M = MorseData.split('    ')
	splited_M.append('__END__')

	for x in splited_M:

		if x == '|':
			print(end=' ')
		elif x == A:
			print(end='A')
		elif x == B:
			print(end='B')
		elif x == C:
			print(end='C')
		elif x == D:
			print(end='D')
		elif x == E:
			print(end='E')
		elif x == F:
			print(end='F')
		elif x == G:
			print(end='G')
		elif x == H:
			print(end='H')
		elif x == I:
			print(end='I')
		elif x == J:
			print(end='J')
		elif x == K:
			print(end='K')
		elif x == L:
			print(end='L')
		elif x == M:
			print(end='M')
		elif x == N:
			print(end='N')
		elif x == O:
			print(end='O')
		elif x == P:
			print(end='P')
		elif x == Q:
			print(end='Q')
		elif x == R:
			print(end='R')
		elif x == S:
			print(end='S')
		elif x == T:
			print(end='T')
		elif x == U:
			print(end='U')
		elif x == V:
			print(end='V')
		elif x == W:
			print(end='W')
		elif x == X:
			print(end='X')
		elif x == Y:
			print(end='Y')
		elif x == Z:
			print(end='Z')
		elif x == _1:
			print(end=' 1 ')
		elif x == _2:
			print(end=' 2 ')
		elif x == _3:
			print(end=' 3 ')
		elif x == _4:
			print(end=' 4 ')
		elif x == _5:
			print(end=' 5 ')
		elif x == _6:
			print(end=' 6 ')
		elif x == _7:
			print(end=' 7 ')
		elif x == _8:
			print(end=' 8 ')
		elif x == _9:
			print(end=' 9 ')
		elif x == _0:
			print(end=' 0 ')
		elif x == PERIOD:
			print(end='. ')
		elif x == COMMA:
			print(end=', ')
		elif x == QMARK:
			print(end='? ')
		elif x == FSLASH:
			print(end='/')
		elif x == ATR:
			print(end='@')


			print(splited_M[counter+1], end='')
			counter += 1

elif choice is 2:

	TextData = input('Type in regular English text to convert  Morse Code\n> ')

	splited_T = TextData.split(' ')


*/
/*//	const string A = ".-";

	string u_input;
	getline(cin, u_input);
//	cout << u_input;

	if(A == u_input) {
		cout << "Damn!";
	}

	return 0;
*/