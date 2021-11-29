#include "Vector.h"

Vector::Vector(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

#pragma region FUNCTION
Vector Vector::sum(Vector vec)
{
	return sum(vec.x, vec.y, vec.z);
}

Vector Vector::sum(double x, double y, double z)
{
	return Vector(this->x + x, this->y + y, this->z + z);
}

Vector Vector::diff(Vector vec)
{
	return diff(vec.x, vec.y, vec.z);
}

Vector Vector::diff(double x, double y, double z)
{
	return Vector(this->x - x, this->y - y, this->z - z);
}
Vector Vector::multiply(double value)
{
	return Vector(this->x * value, this->y * value, this->z * value);
}
Vector Vector::div(double value)
{
	value = 1 / value;

	multiply(value);

}
double Vector::magnitude()
{
	return sqrt(sqrMagnitude());
}

double Vector::sqrMagnitude()
{
	return x * x + y * y + z * z;
}

bool Vector::isEqual(Vector vec)
{
	return this->x == vec.x && this->y == vec.y && this->z == vec.z;
}

#pragma endregion

#pragma region GETTERS

int Vector::getX() const
{
	return x;
}

int Vector::getY() const
{
	return y;
}

int Vector::getZ() const
{
	return z;
}

#pragma endregion