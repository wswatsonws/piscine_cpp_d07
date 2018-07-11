#include "Buzz.h"

Buzz::Buzz(const std::string & name) : Toy(Toy::BUZZ, name, "buzz.txt")
{
}

Buzz::Buzz(const std::string & name, const std::string & ascii) : Toy(Toy::BUZZ, name, ascii)
{
}

bool		Buzz::speak(const std::string & src)
{
  std::cout << "BUZZ: " << this->getName() << " \"" << src << "\"" << std::endl;
  return true;
}

bool		Buzz::speak_es(const std::string & src)
{
  std::cout << "BUZZ: " << this->getName() << " senorita \"" << src << "\" senorita" << std::endl;
  return true;
}
/*Watson*/
