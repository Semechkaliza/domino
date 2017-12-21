#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "List.h"
#include "Bean.h"
using namespace std;
List::~List(){
	Node *temp = start;
	while (temp != NULL) {
		Node *temp2 = temp->next;
		delete temp;
		temp = temp2;
		cout << "distructor work" << endl;
	}
};
Bean List::getValue(int item)
{
	Node *temp = start;
	while (temp != NULL && item) {
		temp = temp->next;
		item--;
	}
	if (temp == NULL)
	{
		Bean answer(-1, -1);
		return answer;
	}
	return temp->x;
}
int List::count()
{
	Node *temp = start;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}
void List::show() {
	Node *temp = start;
	while (temp != NULL) {
		temp->x.toString();
		temp = temp->next;
	}
	//cout << "\n";
}
void List::add(Bean x) {
	Node *temp = new Node();
	temp->next = NULL;
	temp->x = x;
	if (start != 0) {
		temp->prev = end;
		end->next = temp;
		end = temp;
	}
	else
	{
		temp->prev = NULL;
		start = end = temp;
	}
}

Node* List::find(Bean n)
{
	Node *temp = start;
	while (temp != NULL) {
		if (temp->x.getA() == n.getA() && temp->x.getB() == n.getB()) 
		{
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
	//Node *temp = start;
	//while (temp->x.getA() != n.getA() && temp->x.getB() != n.getB()) {
	//	if (temp->next != NULL) {
	//		temp = temp->next;
	//	}
	//	else return NULL;
	//}
	//return temp;
}

void List::remove(Bean n)
{
	Node *temp=this->find(n);

	if (!temp) return;
	if (this->start == this->end && this->start == temp)
	{
		this->start = NULL;
		this->end = NULL;
		delete temp;
	}
	else if (temp == this->start)
	{
		this->start = temp->next;
		temp->next->prev = NULL;
		delete temp;
	}
	else if (temp == this->end)
	{
		this->end = temp->prev;
		temp->prev->next = NULL;
		delete temp;
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		delete temp;
	}
	//Node *temp=this->find(n);
	//if (temp== start) {
	//	if (temp->prev = NULL) {
	//	start = temp->next;
	//	temp = temp->next;
	//	delete(temp->prev);
	//	temp->prev = NULL;
	//	}
	//	else if(temp==end) {
	//		end = temp->prev;
	//		temp = temp->prev;
	//		delete(temp->next);
	//		temp->next = NULL;
	//		}
	//	else {
	//		Node* tempP = temp->prev;
	//		cout << '1';
	//		Node* tempN = temp->next;
	//		cout << '2';
	//		tempP->next = tempN;
	//		cout << '3';
	//		tempN->prev = tempP;
	//		cout << '4';
	//		delete(temp);
	//	}
//}
	
}
