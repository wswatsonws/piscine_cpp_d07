#ifndef BUZZ_H
#define BUZZ_H

#include <string>
#include <iostream>
#include "Toy.h"

class Buzz : public Toy {
public:
	Buzz(std::string const &name, std::string const &file = "buzz.txt");
	Buzz(Buzz const &buzz);
	virtual ~Buzz();
	virtual bool speak(std::string const message);
	virtual bool speak_es(std::string const message);
};

#endif
