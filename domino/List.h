#pragma once
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node      
{
	int x;     
	Node *Next, *Prev; 
};

class List   
{
	Node *Head, *Tail; 
public:
	List() :Head(NULL), Tail(NULL) {};
	~List(); 
	void Show(); 
	void AddHead(int ); 
	void AddEnd(int ); 
	void RemoveHead();
	void RemoveEnd();
	void Remove(int);
	void AddNodeStart(int, List*);
};
