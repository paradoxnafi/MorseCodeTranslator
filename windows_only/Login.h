#ifndef LOGIN_H
#define LOGIN_H

using std::string;

#define admin "AdmiN"

class Login {
	private:
		const char BACKSPACE = 8;
		const char RETURN = 13;

		string USERNAME;
		string PASSWORD;

		int choice;


	public:
		Login();

		void uname();
		string getpass();
};

#endif
