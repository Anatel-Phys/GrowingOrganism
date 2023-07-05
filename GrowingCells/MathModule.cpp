#include "MathModule.h"

v2i::v2i()
{
	x = 0;
	y = 0;
}

v2i::v2i(const v2i& other)
{
	x = other.x;
	y = other.y;
}

v2i::v2i(int i_x, int i_y)
{
	x = i_x;
	y = i_y;
}

void v2i::operator+=(v2i other)
{
	x += other.x;
	y += other.y;
}

void v2i::operator-=(v2i other)
{
	x -= other.x;
	y -= other.y;
}

void v2i::operator+=(int offset)
{
	x += offset;
	y += offset;
}

void v2i::operator-=(int offset)
{
	x -= offset;
	y -= offset;
}

v2i v2i::operator+(v2i other)
{
	return v2i(x + other.x, y + other.y);
}

float v2i::operator*(v2i other)
{
	return x * other.x + y * other.y;
}

v2f::v2f()
{
	x = 0.f;
	y = 0.f;
}

v2f::v2f(const v2f& other)
{
	x = other.x;
	y = other.y;
}

v2f::v2f(float i_x, float i_y)
{
	x = i_x;
	y = i_y;
}

void v2f::operator+=(v2f other)
{
	x += other.x;
	y += other.y;
}

void v2f::operator-=(v2f other)
{
	x -= other.x;
	y -= other.y;
}

void v2f::operator+=(float offset)
{
	x += offset;
	y += offset;
}

void v2f::operator-=(float offset)
{
	x -= offset;
	y -= offset;
}

v2f v2f::operator+(v2f other)
{
	return v2f(x + other.x, y + other.y);
}

float v2f::operator*(v2f other)
{
	return x * other.x + y * other.y;;
}

v2f v2f::operator*(float factor)
{
	return v2f(x * factor, y * factor);
}

void v2f::operator*=(float factor)
{
	x *= factor;
	y *= factor;
}

float v2f::norm()
{
	return sqrtf(x * x + y * y);
}
