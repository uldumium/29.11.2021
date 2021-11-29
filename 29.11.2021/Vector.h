#pragma once
#include <cmath>

class Vector
{
private:

	// ���������� �
	double x;

	// ���������� �
	double y;

	// ���������� z
	double z;

public:

	//�����������
	Vector(double x, double y, double z);

#pragma region FUNCTION

	// ��������
	Vector sum(Vector vec);

	// ��������
	Vector sum(double x, double y, double z);

	// ��������
	Vector diff(Vector vec);

	// ��������
	Vector diff(double x, double y, double z);

	// ���������
	Vector multiply(double value);

	// �������
	Vector div(double value);

	// ����������
	double magnitude();
	
	// ��� ��� �����
	double sqrMagnitude();

	// ���������
	bool isEqual(Vector vec);

#pragma endregion

#pragma region GETTERS
	
	// ������ ��� ���������� �
	int getX() const;

	// ������ ��� ���������� �
	int getY() const;

	// ������ ��� ���������� z
	int getZ() const;

#pragma endregion

#pragma region SETTERS


#pragma endregion

};

