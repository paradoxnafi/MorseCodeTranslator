#include <iostream>
#include <unistd.h> // Different for windows
#include "map.h"
using namespace std;

Map::Map() {

	while(1) {
		system("clear");

		for(int i = 0; i < width; i++) {
			cout << "#";
		}

		cout << endl;

		for(int i = 0; i < height-2; i++) {
			cout << "#";
			for(int j = 0; j < width-2; j++) {
				cout << " ";
			}
			cout << "#" << endl;
		}

		for(int i = 0; i < width; i++) {
			cout << "#";
		}
		cout << endl;
		usleep(100000); // Different for windows
	}
}