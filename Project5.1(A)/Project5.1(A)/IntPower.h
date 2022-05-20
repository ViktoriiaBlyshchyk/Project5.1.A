#pragma once
#include "E.h"
#include "Error.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class IntPower
{
private:
	float first;
	int second;

public:
	IntPower();
	IntPower(float, int);
	IntPower(const IntPower&);

	void SetFirst(float first) { this->first = first; }
	void SetSecond(int second) { this->second = second; }
	float GetFirst() const { return first; }
	int GetSecond() const { return second; }

	operator string() const;

	friend ostream& operator << (ostream&, const IntPower&);
	friend istream& operator >> (istream&, IntPower&);

	IntPower& operator ++();
	IntPower& operator --();
	IntPower operator ++(int);
	IntPower operator --(int);

	friend double Power1(IntPower&);
	friend double Power2(IntPower&);
	friend double Power3(IntPower&);
};
