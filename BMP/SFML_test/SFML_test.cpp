#include <SFML/Graphics.hpp>

using namespace sf; // подключаем пространство имен sf

int main()
{
	// Объект, который, собственно, является главным окном приложения

	RenderWindow window(VideoMode(1024, 768), "SFML Works!");
	float x = 100;
	float y = 100;
	// Главный цикл приложения: выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				window.close(); // тогда закрываем его
		}
		// Установка цвета фона
		window.clear(Color(250, 220, 100));
		// Создаем фигуру - круг радиусом 50
		CircleShape circle(50.f);
		CircleShape circle1(100.f);
		circle1.setFillColor(Color::Red);
		circle1.setPosition(100, 100);
		RectangleShape r(Vector2f(150, 120));
		r.setFillColor(Color::Blue);
		r.setPosition(35, 120);
		// Закрашиваем наш круг 
		x += rand() % 3 - rand() % 3;
		y += rand() % 3 - rand() % 3;
		circle.setFillColor(Color(0, 120, 230, 128));
		circle.setPosition(x, y);
		// Отрисовка круга
		window.draw(circle1);
		window.draw(r);
		window.draw(circle);
		// Отрисовка окна
		window.display();
	}
	return 0;

}