#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

void List::AddEnd(int x)
{
	Node *temp = new Node; 
	temp->Next = NULL;  
	temp->x = x;

	if (Head != NULL)
	{
		temp->Prev = Tail; 
		Tail->Next = temp; 
		Tail = temp; 
	}
	else 
	{
		temp->Prev = NULL;
		Head = Tail = temp; 
	}
}
void List::AddHead(int x)
{
	Node *temp = new Node; 
	temp->Prev = NULL;  
	temp->x = x;

	if (Head != NULL) 
	{
		temp->Next = Head; 
		Head->Prev = temp; 
		Head = temp; 
	}
	else 
	{
		temp->Prev = NULL; 
		Head = Tail = temp; 
	}
}
void List::RemoveHead()
{
	Node *temp = Head->Next;
	temp->Prev = NULL;
	Head = temp;
}
void List::RemoveEnd()
{
	Node *temp = Tail->Prev;
	temp->Next = NULL;
	Tail = temp;
}
void List::Remove(int n)
{
	Node *temp = Head;
	for (int i = 0; i < n-1;i++) {
		temp = temp->Next;
	}
	Node *temp2 = temp->Prev;
	temp = temp->Next;
	temp->Prev = temp2;
	temp2->Next = temp;
}
void List::AddNodeStart(int n, List* list2)
{
	Node *temp = Head;
	for (int i = 0; i < n - 1; i++) {
		temp = temp->Next;
	}
	int k = temp->x;
	Node *temp2 = temp->Prev;
	temp = temp->Next;
	temp->Prev = temp2;
	temp2->Next = temp;
	
	//здесь нужно открепить её от одного списка и прикрепить в начало другого
}
void List::Show()
{
	

	//ВЫВОДИМ СПИСОК С НАЧАЛА
	Node *temp = Head; 
	while (temp != NULL) 
	{
		cout << temp->x << " ";
		temp = temp->Next; 
	}
	cout << "\n";
	//ВЫВОДИМ СПИСОК С КОНЦА
	temp = Tail;
	
	while (temp != NULL) 
	{
		cout << temp->x << " "; 
		temp = temp->Prev; 
	}
	cout << "\n";
}
List::~List() 
{
	while (Head) 
	{
		Tail = Head->Next; 
		delete Head; 
		Head = Tail; 
	}
}