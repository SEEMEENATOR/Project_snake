#include "SnakeMovement.h";
void moveSnake()
{
	int f = snake[0].first, s = snake[0].second;
	if (dir == "RIGHT") {
		if (snake[0].second == m - 2)//перенос на противоположную сторону
			snake[0].second = 1;
		else
			snake[0].second += 1;
	}
	if (dir == "LEFT") {
		if (snake[0].second == 1)
			snake[0].second = m - 2;
		else
			snake[0].second -= 1;
	}
	if (dir == "UP") {
		if (snake[0].first == 1)
			snake[0].first = m - 2;
		else
			snake[0].first -= 1;
	}
	if (dir == "DOWN") {
		if (snake[0].first == m - 2)
			snake[0].first = 1;
		else
			snake[0].first += 1;
	}

	if (snake[0].first == applex && snake[0].second == appley)//голова сьела яблоко
	{
		snake.push_back(make_pair(0, 0));//просто добавить элемент,в цикле станет хвостом
		newapple();
		if (speed > 10)
			speed -= 2;
	}

	for (int i = 1; i < snake.size(); i++)
	{
		int f1, s1;
		f1 = snake[i].first;
		s1 = snake[i].second;
		snake[i].first = f;
		snake[i].second = s;
		f = f1;
		s = s1;
	}

}