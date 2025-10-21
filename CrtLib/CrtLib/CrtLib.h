#pragma once

namespace crt
{
	// Константы цветов
	constexpr int COLOR_BLACK = 0;
	constexpr int COLOR_BLUE = 1;
	constexpr int COLOR_GREEN = 2;
	constexpr int COLOR_CYAN = 3;
	constexpr int COLOR_RED = 4;
	constexpr int COLOR_MAGENTA = 5;
	constexpr int COLOR_BROWN = 6;
	constexpr int COLOR_GRAY = 7;
	constexpr int COLOR_DARK_GRAY = 8;
	constexpr int COLOR_LIGHT_BLUE = 9;
	constexpr int COLOR_LIGHT_GREEN = 10;
	constexpr int COLOR_LIGHT_CYAN = 11;
	constexpr int COLOR_LIGHT_RED = 12;
	constexpr int COLOR_LIGHT_MAGENTA = 13;
	constexpr int COLOR_YELLOW = 14;
	constexpr int COLOR_WHITE = 15;
	
	// Устанавливает курсор в позицию х, у
	void GotoXY(int x, int y);
	// Устанавливает цвет символов
	void SetTextColor(int color);
	// Устанавливает цвет фона символов
	void SetTextBackground(int color);
	// Показывает или скрывает курсор
	void SetCursorVisibility(bool visible);
	// Cкрывает курсор
	void HideCursor();
	// Показывает курсор
	void ShowCursor();
}
