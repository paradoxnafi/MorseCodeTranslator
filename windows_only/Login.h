#ifndef LOGIN_H
#define LOGIN_H

using std::string;

#define admin "AdmiN"

class Login {
	private:
		string USERNAME;
		string PASSWORD;
		int choice;


	public:
		Login();
		
		void uname();
};

#endif