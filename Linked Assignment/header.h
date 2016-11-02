#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
#pragma once

template<typename Type>
struct nodeType
{
	int info;
	nodeType *link;

	//c->b->a-


};

template <typename Type>
class Linked_List
{
public:

	Linked_List() {}
	Linked_List(nodeType start, nodeType end)
	{
		first = &start;
		last = &end;
	}

	bool Add(const Type &add)
	{
		nodeType<Type>* new_node = new nodeType;
		new_node->info = add;
		new_node->link = last;
		while (last != nullptr)
		{
			last->link = new_mode;
			last = new_node;

		}

	}



protected:

	int m_count;
	nodeType <Type> *first;
	nodeType <Type> *last;

};