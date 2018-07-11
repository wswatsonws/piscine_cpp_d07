#include <sstream>
#include "Picture.h"

Picture::Picture()
: data("")
{
}

Picture::Picture(const std::string &file)
{
	getPictureFromFile(file);
}

Picture::Picture(Picture const &picture)
{
	data = picture.data;
}

Picture::~Picture() {

}

bool			Picture::getPictureFromFile(const std::string &file)
{
	std::ifstream	fd;

	fd.open(file.c_str(), std::ios::in);
	if (fd.is_open()) {
		std::string line;
		while (std::getline(fd, line))
			data += (line + "\n");
		fd.close();
		return true;
	}
	data = "ERROR";
	return false;
}
