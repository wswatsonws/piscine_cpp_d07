#include "Woody.h"

Woody::Woody(const std::string & name) : Toy(Toy::WOODY, name, "woody.txt")
{
}

Woody::Woody(const std::string & name, const std::string & ascii) : Toy(Toy::WOODY, name, ascii)
{
}

bool		Woody::speak(const std::string & src)
{
  std::cout << "WOODY: " << this->getName() << " \"" << src << "\"" << std::endl;
  return true;
}
/*Watson*/
