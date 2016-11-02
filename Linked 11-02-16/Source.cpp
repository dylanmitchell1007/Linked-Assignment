#include <iostream>
#include <Windows.h>
#include "Linked.h"
using namespace std;

int main()
{
	LinkedListIterator<int> * Do;

	nodeType<int> a, b, c;
	a.info = 3;
	b.info = 2;
	c.info = 1;

	a.link = &b;
	b.link = &c;
	c.link = NULL;

	nodeType<int> *Things;






}