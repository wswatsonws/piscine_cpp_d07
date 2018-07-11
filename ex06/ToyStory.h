#ifndef TOYSTORY_H
#define TOYSTORY_H

#include <string>
#include <fstream>
#include "Toy.h"

typedef bool (Toy::*toy_speak)(std::string const message);

class ToyStory {
public:
	ToyStory();
	~ToyStory();
	static bool tellMeAStory(std::string const &filestr,
				 Toy &char1, toy_speak speak1,
				 Toy &char2, toy_speak speak2);
};

#endif
