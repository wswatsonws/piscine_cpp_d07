#ifndef _TOY_H_
#define _TOY_H_

#include "Picture.h"

class Toy
{
 public:
  enum ToyType {BASIC_TOY, ALIEN, BUZZ, WOODY};

  class Error
  {
  public:
    enum ErrorType {UNKNOWN, PICTURE, SPEAK};

    ErrorType	type;

    Error();
    ~Error();

    void		setType(ErrorType);
    std::string		what() const;
    std::string		where() const;
  };

 private:
  ToyType		type;
  std::string		name;
  Picture		image;
  Error			erreur;

 public:
  Toy();
  Toy(ToyType type, const std::string & name, const std::string & file);
  Toy(const Toy &);
  ~Toy();

  int			getType() const;
  std::string		getName() const;
  std::string		getAscii() const;

  void			setName(const std::string &name);
  bool			setAscii(const std::string &file);

  Toy			&operator=(Toy const &);

  virtual bool		speak(const std::string &);
  virtual bool		speak_es(const std::string &);

  Toy			&operator<<(const std::string &);
  Toy::Error		getLastError()const;
};

std::ostream		&operator<<(std::ostream &, const Toy &);

#endif /*Watson*/
