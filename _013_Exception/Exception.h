#pragma once

#include <iostream>

using namespace std;

class Exception
{
private:
	string name;
	int line;
	
public:
	Exception(string name, int line);
	virtual ~Exception();

public:
	string GetName();
	int GetLine();
};