#pragma once
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

extern int n, m;//размер сетки
extern char field[19][19];//массив символов для отрисовки
extern string dir;//RIGHT LEFT UP DOWN
extern double speed;//скорость игры
extern vector<pair<int, int>> snake;//вектор пар который содержит координату каждой части змейки
extern int applex, appley;//начальные координаты яблок

void cleanField();
void drawApple();
void drawSnake();
void drawBorder();
void drawField();