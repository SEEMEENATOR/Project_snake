#include "DrawField.h";
void drawSnake()
{
	field[snake[0].first][snake[0].second] = char(178);
	for (int i = 1; i < snake.size(); i++)
		field[snake[i].first][snake[i].second] = char(177);
}