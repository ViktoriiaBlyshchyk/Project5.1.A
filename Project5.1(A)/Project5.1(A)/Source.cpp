#include <iostream>
#include "IntPower.h"
#include <exception>;
#include <stdexcept>;

using namespace std;

int main()
{
	IntPower x;
	cin >> x;

    try
    {
        cout << "Power1 = " << Power1(x) << endl << endl;
        cout << "Power2 = " << Power2(x) << endl << endl;
        cout << "Power3 = " << Power3(x) << endl << endl;
    }
    
    catch (E e)
    {
        cout << e.What() << endl << endl;
    }

    catch (bad_exception* a)
    {
        cout << a->what() << endl << endl;
    }

    catch (Error& a)
    {
        cout << a.What() << endl << endl;
    }
    
	cout << "x++: " << x++ << endl;
	cout << "x: " << x << endl;
	cout << "++x: " << ++x << endl;
	cout << "x: " << x << endl;

	return 0;
}
