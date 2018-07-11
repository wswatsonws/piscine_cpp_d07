#ifndef WOODY_H
#define WOODY_H

#include <string>
#include <iostream>
#include "Toy.h"

class Woody : public Toy {
public:
	Woody(std::string const &name, std::string const &file = "woody.txt");
	Woody(Woody const &woody);
	virtual ~Woody();
	virtual bool speak(std::string const message);
	virtual bool speak_es(std::string const message);
};

#endif
