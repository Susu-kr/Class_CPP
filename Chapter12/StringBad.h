#pragma once
#include <iostream>
#ifndef STRINGBAD_H
#define STRINGBAD_H
class StringBad
{
private:
	char * str;
	int len;
	static int num_strings;
public:
	StringBad();
	StringBad(const char * s);
	~StringBad();
	
	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif // !STRINGBAD_H



