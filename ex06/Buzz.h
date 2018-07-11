#ifndef _BUZZ_H_
#define _BUZZ_H_

#include "Toy.h"

class Buzz : public Toy
{
 public:
  Buzz(const std::string & name);
  Buzz(const std::string & name, const std::string & ascii);

  virtual bool		speak(const std::string &);
  virtual bool		speak_es(const std::string &);
};

#endif /*Watson*/
