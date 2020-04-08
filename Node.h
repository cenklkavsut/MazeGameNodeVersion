#pragma once
#ifndef Node
//#define Node
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std

class Room
{
	Room* roomN;
	Room* roomS;

public:
	Room();
	void setN(Room* north)
};












;

class Node
{
public:
	Node();
	Node(string nd);//nd is node dir
	void setNext(Node* nextNode);
	Node* getNext();
	//string * getDir();
	string* getNode(); //gets the next one.
					   //gets the imputed direction.
					   //shows the current node it is on.
private:
	string * dirr;//n for north ,s for south west east etc s 4 direction names //if input is this dirr is this and input if else
	Node* next;//point to the next one from the node.
};

class NodeList :Node
{
private:
	Node * start;
	Node* end;
public:
	NodeList();
	bool isEmpty();//if bool is needed to check if empty or not.
	void addFirstNode(string nd); //add the first one example a
	void addNodeAtEnd(string nd); //add one to the end.
	void listAllNodes();
};
#endif
