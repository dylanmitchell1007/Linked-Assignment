#include <iostream>
#include <Windows.h>
#include "Header.h"
using namespace std;


int main()
{
	nodeType *head;
	nodeType a, b, c;

	c.info = 4;
	b.info = 2;
	a.info = 0;

	c.link == &b;
	b.link == &a;
	a.link == nullptr;

	head = &c;

	Linked_List<int> * test = new Linked_List<int>;
	test->Add(1);

	system("pause");
	return 1;
}