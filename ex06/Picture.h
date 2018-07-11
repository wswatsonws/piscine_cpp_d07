#ifndef PICTURE_H
#define PICTURE_H

#include <string>
#include <iostream>
#include <fstream>

class Picture {
public:
	std::string data;
	Picture();
	Picture(const std::string &file);
	Picture(Picture const &picture);
	virtual ~Picture();
	bool getPictureFromFile(const std::string &file);
};


#endif
