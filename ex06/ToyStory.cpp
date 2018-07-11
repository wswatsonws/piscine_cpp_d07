#include <cstring>
#include "ToyStory.h"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

bool			ToyStory::tellMeAStory(std::string const &filestr,
					       Toy &char1, toy_speak speak1,
					       Toy &char2, toy_speak speak2)
{
	std::string	sentence;
	size_t		index;
	std::string	picture;
	int		count = 0;
	char		buffer[2048];
	std::ifstream file(filestr.data());
	std::cout << char1.getAscii() << "\n";
	std::cout << char2.getAscii() << "\n";
	if (file.is_open()) {
		while (!file.eof()) {
			memset(buffer, 0, 2048);
			file.getline(buffer, 2048);
			sentence = buffer;
			if ((index = sentence.find("picture:")) == 0) {
				picture = sentence.substr(8);
				if (count % 2) {
					if (!char1.setAscii(picture))
						return false;
					std::cout << char1.getAscii() << "\n";
				} else {
					if (!char2.setAscii(picture))
						return false;
					std::cout << char2.getAscii() << "\n";
				}
			} else {
				if (count % 2) {
					if (!(char1.*speak1)(sentence))
						return false;
				} else {
					if (!(char2.*speak2)(sentence))
						return false;
				}
			}
			++count;
		}
	}
	return true;
}
