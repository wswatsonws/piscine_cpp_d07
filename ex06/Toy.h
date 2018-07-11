#ifndef TOY_HPP
#define TOY_HPP

#include <string>
#include <iostream>
#include "Picture.h"

class Toy {
public:
	enum ToyType {
		BASIC_TOY,
		ALIEN,
		BUZZ,
		WOODY
	};
	class Error {
	public:
		enum ErrorType {
			UNKNOWN,
			PICTURE,
			SPEAK
		};
		ErrorType type;
		Error();
		void setType(ErrorType type);
		std::string what() const;
		std::string where() const;
	};

protected:
	ToyType type;
	std::string name;
	Picture picture;
	Error error;
	int spanish = 0;
public:
	Toy();
	Toy(ToyType type, std::string const &name, std::string const &file);
	Toy(Toy const &toy);
	virtual ~Toy();
	std::string const &getName() const;
	int getType() const;
	std::string const &getAscii() const;
	void setName(std::string const &name);
	bool setAscii(std::string const &ascii);
	virtual bool speak(std::string const message);
	virtual bool speak_es(std::string const message);
	Toy::Error const &getLastError() const;
	Toy &operator=(Toy const &toy);
	Toy &operator<<(std::string const & ascii);

};

std::ostream &operator<<(std::ostream & os, Toy const & toy);

#endif
