#pragma once
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Bean.h"
using namespace std;
struct Node {
	Bean x;
	Node *next, *prev;
};
class List {
	Node *start, *end;
public:
	List() :start(NULL), end(NULL) {};
	~List();
	void show();
	void add(Bean);
	Node* find(Bean);
	void remove(Bean);
	int count();
	Bean getValue(int item);
};
