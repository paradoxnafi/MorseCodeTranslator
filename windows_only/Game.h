#ifndef GAME_H
#define GAME_H

class Game {
	private:
		int cpu_point, player_point, Gpoint, rand_cpu, condition;
		std::string name, cpu_choice_name, player_choice_name;
		char P, C;

	public:
//		Game();
		void message();
		void CPU();
		void get_input();
		void calculation();
		void display();

//		~Game();
};

#endif