#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	system("CLS");
	List lst;
	lst.AddEnd(100);
	lst.AddEnd(800);
	lst.AddEnd(900);
	lst.AddEnd(950);

	lst.Show();
	cout << endl;
	lst.AddEnd(2);
	lst.AddHead(1);
	lst.Show();
	lst.RemoveHead();
	lst.Show();
	lst.RemoveEnd();
	lst.Show();
	lst.Remove(2);
	lst.Show();
	system("PAUSE");
}