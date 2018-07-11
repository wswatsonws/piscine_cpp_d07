#include "Buzz.h"

Buzz::Buzz(std::string const &name, std::string const &file)
	: Toy(BUZZ, name, file)
{
}

Buzz::Buzz(Buzz const &buzz)
	: Toy(buzz)
{
}

Buzz::~Buzz()
{
}

bool	Buzz::speak(const std::string message)
{
	std::cout << "BUZZ: ";
	return Toy::speak(message);
}

bool	Buzz::speak_es(const std::string message)
{
	std::cout << "BUZZ: " << name << " senorita \""
		  << message << "\" senorita\n";
	return true;
}
