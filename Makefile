all:
	g++ main.cpp Translator.cpp Game.cpp Login.cpp -o main

clear:
	mv main .trash