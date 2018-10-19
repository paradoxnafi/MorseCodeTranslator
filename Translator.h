#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#define all_char "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?/@"

class Translator {
	private:
		int choice, total_word;
		std::string morse_data;
		std::string data[50];
		std::string store_word[2048];

		public:
			Translator();
			void interface();
			void get_morse();
			void split_string();
			void to_text();
			~Translator();
};

#endif