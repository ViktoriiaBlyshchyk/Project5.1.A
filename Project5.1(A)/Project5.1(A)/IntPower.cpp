#include "IntPower.h"

IntPower::IntPower()
{
	first = 1;
	second = 0;
}

IntPower::IntPower(float x, int y)
{
	first = x;
	second = y;
}

IntPower::IntPower(const IntPower& i)
{
	first = i.first;
	second = i.second;
}

IntPower::operator string () const
{
	stringstream ss;
	ss << "First = " << first << endl;
	ss << "Second = " << second << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const IntPower& i)
{
	out << string(i);
	return out;
}

istream& operator >> (istream& in, IntPower& i)
{
	cout << "Input complex value: " << endl;
	cout << "First = "; in >> i.first;
	cout << "Second = "; in >> i.second;

	cout << endl;
	return in;
}

IntPower& IntPower::operator ++()
{
	first++;
	return *this;
}

IntPower& IntPower::operator --()
{
	first--;
	return *this;
}

IntPower IntPower::operator ++(int)
{
	IntPower t(*this);
	second++;
	return t;
}

IntPower IntPower::operator --(int)
{
	IntPower t(*this);
	second--;
	return t;
}

double Power1(IntPower& a)
{
	if (a.first == 0) { throw E("E error"); }
	double result;
	result = pow(a.first, a.second);
	return result;
}

double Power2(IntPower& a)
{
	if (a.first == 0) { throw bad_exception(); }
	double result;
	result = pow(a.first, a.second);
	return result;
}

double Power3(IntPower& a)
{
	if (a.first == 0) { throw Error("Error error"); }
	double result;
	result = pow(a.first, a.second);
	return result;
}