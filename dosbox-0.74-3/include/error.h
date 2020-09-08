#pragma once

#include <exception>
#include <string>

class BrokenException : public std::exception {
private:
	const std::string _what;
public:
	BrokenException(const std::string &what) : std::exception(), _what("Broken feature: " + what) {}
	virtual const char* what() const override { return _what.c_str(); }
};