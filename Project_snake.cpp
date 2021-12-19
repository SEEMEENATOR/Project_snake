#include <iostream>
#include <vector>
#include <Windows.h>
#include "SnakeMovement.h";
#include "DrawField.h";
#include "CheckRules.h"
using namespace std;

int n = 19, m = 19;//размер сетки
char field[19][19];//массив символов для отрисовки
string dir = "RIGHT";//RIGHT LEFT UP DOWN
double speed = 80;//скорость игры
vector<pair<int, int>> snake;//вектор пар который содержит координату каждой части змейки
int applex = 8, appley = 13;//начальные координаты яблока

int main()
{
	system("title Snake");
	snake.push_back(make_pair(8, 4));
	snake.push_back(make_pair(8, 3));
	snake.push_back(make_pair(8, 2));
	while (snakeIsAlive())
	{
		if (GetAsyncKeyState(VK_UP)) {
			if (dir != "DOWN") dir = "UP";
		}
		else if (GetAsyncKeyState(VK_DOWN)) {
			if (dir != "UP") dir = "DOWN";
		}
		else if (GetAsyncKeyState(VK_LEFT)) {
			if (dir != "RIGHT") dir = "LEFT";
		}
		else if (GetAsyncKeyState(VK_RIGHT)) {
			if (dir != "LEFT") dir = "RIGHT";
		}
		moveSnake();
		cleanField();
		drawApple();
		drawSnake();
		drawBorder();
		drawField();
		if (dir == "LEFT" || dir == "RIGHT")
			Sleep(speed);
		else
			Sleep(speed * 2);
	}
	cout << "\n  GAME OVER\n";
	string name;
	cout << "ENTER NAME ";
	cin >> name;
}
