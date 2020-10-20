/*
Dungeon Crawler
Created by: Christopher Newton, Corbin Robinson, and Zaniken Gurule
CS 3150
Last Edited: 10/13/2020
*/
#pragma once
#ifndef MAP_H
#define MAP_H

static int col;
static int row;

void getMapSize();
void fillMap();
void fillHMap(int, int);
void printMap();
void hprintMap(int);

#endif
