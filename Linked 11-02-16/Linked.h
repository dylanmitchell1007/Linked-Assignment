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
	LinkedListIterator() {}
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
	const linkedListType < T > ? &operator= (const linkedListType<T>& otherlist);
	{
		while (first != NULL)
		{
			first->info = otherlist.first->info;
			first = first->link;

		}
		return first;

	}



	void intializeList();



	bool isEmptyList() const;




	void print() const;




	int length() const;




	void destroyList();




	Type front() const;//return info




	Type Back() const;//return info





	bool search(const T& nodeInfo);




	void insertFirst(const T& nodeinfo);



	void insertLast(const T& nodeinfo);




	void deleteNode(const T& nodeinfo);





};