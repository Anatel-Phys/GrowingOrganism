#pragma once
#include <cmath>

class v2i
{
	int x, y;

	v2i();
	v2i(const v2i& other);
	v2i(int i_x, int i_y);
	void operator+=(v2i other);
	void operator-=(v2i other);
	void operator+=(int offset);
	void operator-=(int offset);
	v2i operator+(v2i other);
	float operator*(v2i other);
};

class v2f
{
	float x, y;
	v2f();
	v2f(const v2f& other);
	v2f(float i_x, float i_y);
	void operator+=(v2f other);
	void operator-=(v2f other);
	void operator+=(float offset);
	void operator-=(float offset);
	v2f operator+(v2f other);
	float operator*(v2f other);
	v2f operator*(float factor);
	void operator*=(float factor);
	float norm();
};

