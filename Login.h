#ifndef LOGIN_H
#define LOGIN_H

using std::string;

#define admin "AdmiN"

class Login {
	private:
		const char BACKSPACE = 127;
		const char RETURN = 10;

		string USERNAME;
		string PASSWORD;

		int choice;


	public:
		Login();
		
		void uname();
		string getpass();
};

#endif