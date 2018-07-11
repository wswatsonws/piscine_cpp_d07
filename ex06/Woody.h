#ifndef _WOODY_H_
#define _WOODY_H_

#include "Toy.h"

class Woody : public Toy
{
 public:
  Woody(const std::string & name);
  Woody(const std::string & name, const std::string & ascii);

  bool			speak(const std::string &);
};

#endif /*Watson*/
