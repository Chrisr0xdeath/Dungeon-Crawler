/*
Dungeon Crawler
Created by: Christopher Newton, Corbin Robinson, and Zaniken Gurule
CS 3150
Last Edited: 10/13/2020
*/
#include <iostream>
#include "hero.h"
#include "map.h"
#include "driver.h"

using namespace std;
int health = 50;
string hmove = "";

int moveHero() {
	string x;
	cin >> x;
	x = hmove;
	if (hmove == "n" || hmove == "N") {
		return 1;
	}
	else if (hmove == "w" || hmove == "W") {
		return 2;
	}
	else if (hmove == "s" || hmove == "S") {
		return 3;
	}
	else if (hmove == "e" || hmove == "E") {
		return 4;
	}
	else {
		cout << "wrong input, try again!" << endl;
		moveHero();
	}
}