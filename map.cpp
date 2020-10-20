/*
Dungeon Crawler
Created by: Christopher Newton, Corbin Robinson, and Zaniken Gurule
CS 3150
Last Edited: 10/13/2020
*/
//INCLUDES
#include <iostream>
#include <io.h>
#include "map.h"
#include "hero.h"
//NAMESPACES
using namespace std;

string map[25][25];
string cell = "[]";
string hcell = "[XD]";
string scell = "[x]";
int hcol = 0;
int hrow = 0;
/*void getMapSize() {
	cout << "Please enter amount of rows for the map" << endl;
	cin >> row;
	cout << "Please enter amount of columns for the map" << endl;
	cin >> col;
}*/
void hprintMap(int x) {
	if (x == 1) {
		if (hrow > 0) {
			hrow--;
			fillHMap(hrow, hcol);
		}
		else {
			cout << "cannot go that way! please try moving again" << endl;
			//moveHero();
		}
	}
	else if (x == 2) {
		if (hcol > 0) {
			hcol--;
			fillHMap(hrow, hcol);
		}
		else {
			cout << "cannot go that way! please try moving again" << endl;
			//moveHero();
		}
	}
	else if (x == 3) {
		if (hrow < 25) {
			hrow++;
			fillHMap(hrow, hcol);
		}
		else {
			cout << "cannot go that way! please try moving again" << endl;
			//moveHero();
		}
	}
	else if (x == 4) {
		if (hcol < 25) {
			hcol++;
			fillHMap(hrow, hcol);
		}
		else {
			cout << "cannot go that way! please try moving again" << endl;
			//moveHero();
		}
	}
	else {
		cout << "invalid input, try again";
		//moveHero();
	}
}

void printMap() {
	for (int i = 0; i < 25; ++i) {
		for (int j = 0; j < 25; ++j) {
			cout << map[i][j];
		}
		cout << endl;
	}
}

void fillMap() {
	for (int i = 0; i < 25; ++i) {
		for (int j = 0; j < 25; ++j) {
			map[i][j] = cell;
		}
		cout << endl;
	}
}

void fillHMap(int x, int y) {
	for (int i = 0; i < 25; ++i) {
		for (int j = 0; j < 25; ++j) {
			if (i == x && j == y) {
				map[i][j] = hcell;
			}
			else {
				map[i][j] = cell;
			}
		}
		cout << endl;
	}
	printMap();
}