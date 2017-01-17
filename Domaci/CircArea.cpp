#include "CircArea.h"
#define PI 3.1415926

float CircArea::GetCircCircum(float r)
{
	float CC = 2 * r * PI;
	return CC;
}

float CircArea::GetCircArea(float r)
{
	float CA = r * r * PI;
	return CA;
}

float CircArea::GetRectCircum(float a, float b)
{
	float RC = 2 * (a + b);
	return RC;
}

float CircArea::GetRectArea(float a, float b)
{
	float RA = a * b;
	return RA;
}
