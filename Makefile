all:
	g++ main.cpp Translator.cpp Game.cpp -o main

clear:
	mv main .trash