#include "stdafx.h"
#include "List.h"
#include <iostream>
#include <cstdlib>

using namespace std;

List::List()
{
	head = NULL;
	current = NULL;
	temp = NULL;
}

List::~List()
{
}

void List::AddNode(int addData)
{
	nodePtr n = new node;
	n->next = NULL; //point "next" member in current node to NULL.
	n->data = addData;

	if (head != NULL) //at least 1 element in list
	{
		current = head;
		while (current->next != NULL) //go all the way to last node
		{
			current = current->next;
		}

		//current is now at the last element.
		//assign address of n to last element "next" member
		current->next = n;
	}
	else //if no list
	{
		head = n; //make the 1st node to head
	}
}

void List::DeleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp	= head;
	current = head;

	while (current != NULL && current->data != delData)
	{
		temp = current;
		current = current->next;
	}

	if (current == NULL)
	{
		cout << delData << " was not in the list" << endl;
		delete delPtr;
	}
	else
	{
		delPtr = current; //pointing to current node we want to delete
		current = current->next; //point to next node
		temp->next = current; //stich the previous node with next node
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted." << endl;
	}
}

void List::PrintList()
{
	current = head; //point to front of the list
	while (current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
}

int main()
{
	List myList;

	myList.AddNode(3);
	myList.AddNode(10);
	myList.AddNode(7);
	myList.PrintList();

	myList.DeleteNode(3);
	myList.PrintList();
}
