/*
Dungeon Crawler
Created by: Christopher Newton, Corbin Robinson, and Zaniken Gurule
CS 3150
Last Edited: 10/13/2020
*/
//INCLUDES
#include <iostream>
#include <io.h>
#include "driver.h"
#include "map.h"
#include "hero.h"
//NAMESPACES
using namespace std;

int main() {
	bool won = false;
	col = 25;
	row = 25;
	//hero = "i";
	movehold = 0;
	//getMapSize();
	fillMap();
	printMap();
	while (won != true) {
		cout << "Please move up, down, left, or right with the corresponding keys:   n, e, s, w" << endl;
		cout << "Hero Health: " + health << endl;
		movehold = moveHero();
		hprintMap(movehold);
	}
}