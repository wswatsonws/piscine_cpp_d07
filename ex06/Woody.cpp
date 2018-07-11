#include "Woody.h"

Woody::Woody(std::string const &name, std::string const &file)
	: Toy(WOODY, name, file)
{
}

Woody::Woody(Woody const &woody)
	: Toy(woody)
{
}

Woody::~Woody()
{
}

bool	Woody::speak(const std::string message)
{
	std::cout << "WOODY: ";
	return Toy::speak(message);
}

bool	Woody::speak_es(const std::string message)
{
	return Toy::speak_es(message);
}
