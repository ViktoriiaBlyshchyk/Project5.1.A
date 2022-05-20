#pragma once
#include <string>

using namespace std;

class Error :
	public exception
{
	string message;

public:
	string What() const { return message; }
	Error(string a) { message = a; }
};