#ifndef _PICTURE_H_
#define _PICTURE_H_

#include <iostream>
#include <string>

class Picture
{
 public:
  Picture(const std::string &file);
  Picture();
  Picture(const Picture &);
  ~Picture();

  std::string		data;
  bool			getPictureFromFile(const std::string &file);

  Picture		&operator=(Picture const &);
};

#endif /*Watson*/
