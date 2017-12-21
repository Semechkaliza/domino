#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

void rep(int n)
{
	for (int i = 1; i <= n; i++)
		cout << "  " << i << "  ";
}


int main()
{
	List bazar;
	List player1;
	List player2;
	List desk;
	for (int i = 0; i <= 6; i++)
		for (int j = i; j <= 6; j++)
		{
			Bean temp(i, j);
			bazar.add(temp);
		}
	bazar.show();
	cout << endl;
	//----------начальное------------------
	for (int i = 0; i < 7; i++)
	{
		int item = rand() % (bazar.count() - 1);
		Bean tmp = bazar.getValue(item);
		player1.add(tmp);
		bazar.remove(tmp);
	}
	for (int i = 0; i < 7; i++)
	{
		int item = rand() % (bazar.count() - 1);
		Bean tmp = bazar.getValue(item);
		player2.add(tmp);
		bazar.remove(tmp);
	}
	//-------------------------------------
	while (1)
	{
		system("cls");
		cout << "desk: ";
		desk.show();
		cout << "\n\n";
		cout << "player1: ";
		player1.show();
		cout << endl<< "         ";
		rep(player1.count());

		cout << endl<<"#: ";
		int item;
		cin >> item;
		if (item > player1.count() || item<=0)
			continue;
		Bean tmp = player1.getValue(item-1);
		//проверка

		desk.add(tmp);
		player1.remove(tmp);

		system("cls");
		cout << "desk: ";
		desk.show();
		cout << "\n\n";
		cout << "player2: ";
		player2.show();
		cout << endl << "         ";
		rep(player2.count());

		cout << endl << "#: ";
		int item2;
		cin >> item2;
		if (item2 > player2.count() || item2 <= 0)
			continue;
		tmp = player2.getValue(item2 - 1);
		//проверка

		desk.add(tmp);
		player2.remove(tmp);


	}



	player1.show();
	cout << endl<<endl;
	player2.show();
	system("pause");
}




