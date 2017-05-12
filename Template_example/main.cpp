#include <iostream>
#include <conio.h>
#include "TempClass.h"
#include <map>

using namespace std;

class B1
{

};

class B
{
public:
	friend ostream& operator<<(ostream& c, const B& b)
	{
		c << "1" << endl;
		return c;
	}
};

template<class T> void function(T argument)
{
	cout << argument<<endl;
}


int main()
{
	TempClass<int> intObj(1);
	cout << intObj.getX() << endl;
	intObj.showX();
	TempClass<char> charObj('c');
	TempClass<char*> strObj("asb");
	function(1);
	function('b');
	function(B());
	//function(B1());
	_getch();
	return 0;
}