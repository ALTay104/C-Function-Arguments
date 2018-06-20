#pragma once
#ifndef LIST_H
#define LIST_H

class List
{
	private:
		typedef struct node {
			int data;
			node *next;
		} *nodePtr; //creating new type def call nodePtr

		nodePtr head;
		nodePtr current;
		nodePtr temp;

	public: //functions prototype
		List(); //constructor
		void AddNode(int addData);
		void DeleteNode(int delData);
		void PrintList();

		~List();
};

#endif // !LIST_H



