#pragma once
#include <cmath>

class Vector
{
private:

	// Координата х
	double x;

	// Координата у
	double y;

	// Координата z
	double z;

public:

	//Калькулятор
	Vector(double x, double y, double z);

#pragma region FUNCTION

	// Сложение
	Vector sum(Vector vec);

	// Сложение
	Vector sum(double x, double y, double z);

	// Разность
	Vector diff(Vector vec);

	// Разность
	Vector diff(double x, double y, double z);

	// Умножение
	Vector multiply(double value);

	// Деление
	Vector div(double value);

	// Расстояние
	double magnitude();
	
	// Хер его знает
	double sqrMagnitude();

	// Равенство
	bool isEqual(Vector vec);

#pragma endregion

#pragma region GETTERS
	
	// Геттер для компонента х
	int getX() const;

	// Геттер для компонента у
	int getY() const;

	// Геттер для компонента z
	int getZ() const;

#pragma endregion

#pragma region SETTERS


#pragma endregion

};

