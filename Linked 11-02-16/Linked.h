#pragma once
#include <iostream>		
#include <Windows.h>
#include <math.h>
using namespace std;

template <typename T>
struct nodeType
{
	T info;
	nodeType<T> *link;
};

template<typename T>
class LinkedListIterator
{
private:
	nodeType<T> * current;


public:
	//Default Constructor
	//Postcondition: current = NULL
	LinkedListIterator() 
	{
		current = NULL;
	}


	//Constructor with parameters
	LinkedListIterator(nodeType<T> *node)
	{
		current = node;
	}

	//Function to overlaod the dereferencing operator *
	//Postcondition:Returns the info contained in the node
	T operator *()
	{
		return current->info;
	}

	//Overload the pre-increment operator
	//Postcondition: The iterator is advanced to the next node
	LinkedListIterator<T> operator++()
	{
		current = current->link;
		return *this;
	}

	//Overlaod the equality operator
	//Postcondition: Returns true if this iterator is equal to the 
	//iterator specified by right otherwise returns false
	bool operator==(LinkedListIterator<T>& list) const
	{
		if (current == list.current)
		{

			return true;
		}

		return false;
	}


	//Overload the not equal operator
	//Postcondition: Returns true if this iterator is not equal to the
	//iterator specified by right otherwise returns false.
	bool operator!=(LinkedListIterator<T>& list) const
	{
		if (current != list.current)
		{
			return true;
		}
		return false;
	}

};

template <typename T>
class linkedListType
{
protected:
	int count; //variable to store the number of elements in the list
	nodeType<T> *first;
	nodeType<T> *last;

public:
	
	const linkedListType < T > &operator= (const linkedListType<T>& otherlist)
	{
		while (first != NULL)
		{
			first->info = otherlist.first->info;
			first = first->link;

		}
		return first;

	}



	void intializeList()
	{
		first = NULL;
		last = NULL;
		count = 0;
	}



	bool isEmptyList() const
	{
		if (first = NULL)
		{
			return true;
		}
		return false;
	}
			



	void print() const
	{
		nodeType<T> *current;
		current = first;
		while (current != NULL)
		{
			cout << current->info;
			current = current->link;
		}
	}




	int length() const
	{
		while (first != NULL)
		{
			first = first->link;
			count++;
		}
		return count;

	}




	void destroyList()
	{
		nodeType<T> *iter = first;
		while (iter != NULL)
		{
			nodeType<T> *tmp = iter;
			iter = iter->link;
			delete tmp;
		}
	}




	T front() const//return info
	{
		if (first != NULL)
		{
			return first;
		}
		return false;
	}

	T Back() const//return info
	{	
		if (first != NULL)
		{
			return last;
		}
		return false;

	}





	bool search(const T& nodeInfo)
	{
		if (first->info = nodeInfo)
		{
			return true
		}
		return false;
	}




	void insertFirst(const T& nodeinfo)
	{
		nodeType <T> *Node = first;
		Node->info = nodeinfo;
		Node->link = first;
		first = Node;
		
			


	}



	void insertLast(const T& nodeinfo)
	{
		nodeType <T> *Node = last;
		nodeType <T> tmpNode = new nodeType<T>();
		
		Node->info = nodeinfo;
		Node->link = NULL;
		last->link = Node;
		last = Node;

	}


	//Function to delete node from the list.
	//Postcondition: If found, the node containing the node is deleted from the list first points to
	//the first node, last points to the last node of the update list, and count is decremented by 1
	void deleteNode(const T& nodeinfo)
	{
		first->Node


	}





};