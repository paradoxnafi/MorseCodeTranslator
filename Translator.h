#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#define all_char "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?!:;/@'-" // 46 char in total
#define all_s_char "abcdefghijklmnopqrstuvwxyz0123456789.,?!:;/@'-" // 46 but alphabets are in small letter

class Translator {
	private:
		int choice, total_word, text_size;
		char ask;
		std::string morse_data;
		std::string text_data;
		std::string data[50];
		std::string store_word[2048]; // Maximum 2048 words are supported ata a time.
									  // Woking on it to remove this limitation.
		public:
			Translator();

			void interface();

			void get_morse();
			void split_morse();
			void to_text();

			void get_text();
			void to_morse();

			~Translator();
};

#endif
