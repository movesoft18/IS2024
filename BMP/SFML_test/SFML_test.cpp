#include <SFML/Graphics.hpp>
using namespace sf; // подключаем пространство имен sf

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(1024, 768), "Заголовок окна");
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
		window.clear(Color(0, 0, 0));
		// Создаем фигуру - круг радиусом 50
		CircleShape circle(1.f);
		// Закрашиваем наш круг 
		for(int i = 0; i < 300; i++)
			for (int j = 0; j < 300; j++)
			{
				circle.setFillColor(Color(
					rand()%256, 
					rand() % 256,
					rand() % 256));
				circle.setPosition(j, i);
				window.draw(circle);
			}
		// Отрисовка окна
		window.display();
	}
	return 0;
}