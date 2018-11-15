#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include "Game.h"
using namespace std;

void Game::message() {

	Game Gobj2;
	condition = 1;
	cpu_point = 0;
	player_point = 0;

	cout << "Welcome in RPS game." << endl;
	cout << "What is your name: ";

//	cin >> name;
	cin.ignore();
	getline(cin, name); cout << name << endl;

	cout << "Game point: ";
	cin >> Gpoint;

	cout << "Choose between R, P, S.";
	cout << " Here R represents Rock, P represents Paper, S represents Scissors" << endl;

	while(condition == 1) {
		Gobj2.CPU();
		Gobj2.get_input();
		Gobj2.calculation();
		Gobj2.display();
	}
}

void Game::CPU() {
	srand(time(0));

	rand_cpu = rand()%3;
	if(rand_cpu == 0) {
		C = 'R';
		cpu_choice_name = "Rock";
	} else if(rand_cpu == 1) {
		C = 'P';
		cpu_choice_name = "Paper";
	} else {
		C = 'S';
		cpu_choice_name = "Scissor";
	}
}

void Game::get_input() {

	cout << "\t: ";
	cin >> P;

	if( (P == 'R') || (P == 'r') ) {
		P = 'R';
		player_choice_name = "Rock";
	} else if( (P == 'P') || (P == 'p') ) {
		P = 'P';
		player_choice_name = "Paper";
	} else if ( (P == 'S') || (P == 's') ) {
		P = 'S';
		player_choice_name = "Scissor";
	} else {
		cout << "Invalid input" << endl;
	}
}
void Game::calculation() {
	if( (C == 'R') && (P == 'P') ) {
		player_point += 1;
	} else if( (C == 'R') && (P == 'S') ) {
		cpu_point += 1;
	} else if( (C == 'P') && (P == 'R') ) {
		cpu_point += 1;
	} else if( (C == 'P') && (P == 'S') ) {
		player_point += 1;
	} else if( (C == 'S') && (P == 'R') ) {
		player_point += 1;
	} else if( (C == 'S') && (P == 'P') ) {
		cpu_point += 1;
	}
}

void Game::display() {
	cout << "CPU: " << cpu_choice_name << "\t\t";
	cout << name << ": " << player_choice_name << endl;
	cout << "Points: " << cpu_point << "\t\t";
	cout << "Points: " << player_point << endl;

	if(player_point == Gpoint) {
		cout << "******************************" << endl;
		cout << "Congratulations, winner is " << name << endl;
		cout << "******************************" << endl;

		condition = 0;
 	} else if(cpu_point == Gpoint) {
 		cout << "You loose. Better luck next time" << endl;

 		condition = 0;
 	}
}