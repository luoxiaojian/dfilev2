#ifndef _DFILE_H_
#define _DFILE_H_

#include <string>
#include <iostream>

class dfile {
public:
	dfile(std::string data) : data_(data) {}
	void hello();

private:
	std::string data_;
};

#endif
