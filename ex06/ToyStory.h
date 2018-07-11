#ifndef _TOYSTORY_H_
#define _TOYSTORY_H_

#include "Toy.h"
#include <string>
#include <fstream>

class ToyStory
{
public:
ToyStory();
~ToyStory();

 static bool		tellMeAStory(const std::string &, Toy &, bool (Toy::*ptr1)(std::string const &), Toy &, bool (Toy::*ptr2)(std::string const &));
};

#endif /*Watson*/


