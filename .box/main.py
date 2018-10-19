# MorseCodeTranslator
## Data..............

A = '.-'
B =  '-...'
C = '-.-.'
D = '-..'
E = '.'
F = '..-.'
G = '--.'
H = '....'
I = '..'
J = '.---'
K = '-.-'
L = '.-..'
M = '--'
N = '-.'
O = '---'
P = '.--.'
Q = '--.-'
R = '.-.'
S = '...'
T = '-'
U = '..-'
V = '...-'
W = '.--'
X = '-..-'
Y = '-.--'
Z = '--..'

_1 = '.----'
_2 = '..---'
_3 = '...--'
_4 = '....-'
_5 = '.....'
_6 = '-....'
_7 = '--...'
_8 = '---..'
_9 = '----.'
_0 = '-----'

PERID = '.-.-.-'
COMMA = '--..--'
QMARK = '..--..'
FSLASH = '-..-.'
ATR = '.--.-.'

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

	splited_M = MorseData.split('   ')
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


