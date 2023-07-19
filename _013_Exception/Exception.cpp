#include "Exception.h"

Exception::Exception(string name, int line)
{
	this->name = name;
	this->line = line;
}

Exception::~Exception()
{

}

string Exception::GetName()
{
	return name;
}

int Exception::GetLine()
{
	return line;
}
