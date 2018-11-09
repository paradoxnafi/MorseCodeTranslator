#include <cstdlib>
#include <iostream>
using namespace std;

const char *mypass="null";

int main(){
	char *password=getpass("Enter password: ");

	if(strcmp(password,mypass)==0) cout <<"Correct password!\n";
	else cout <<"Incorrect password!\n";

	return 0;
}