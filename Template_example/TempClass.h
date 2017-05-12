#pragma once
#include <iostream>

using namespace std;
template <class T> class TempClass
{
private:
	T x;
public:
	TempClass(T i);
	T getX();
	void showX();
};

template<class T>
TempClass<T>::TempClass(T i)
{
	x = i;
}
template<class T>
T TempClass<T>::getX()
{
	return x;
}
template<class T>
void TempClass<T>::showX()
{
	cout << x<<endl;
}
