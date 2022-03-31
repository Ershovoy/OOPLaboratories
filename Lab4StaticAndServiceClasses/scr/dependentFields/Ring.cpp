#include "Ring.h"

int Ring::_allRingCount = 0;

Ring::Ring() : _innerRadius(0), _outerRadius(0), _centre()
{
	_allRingCount += 1;
}

Ring::Ring(float centreX, float centreY, float innerRadius, float outerRadius)
	: _centre(Point(centreX, centreY))
{
	SetRadius(innerRadius, outerRadius);
	_allRingCount += 1;
}

Ring::Ring(const Point& centre, float innerRadius, float outerRadius) 
	: _centre(centre)
{
	SetRadius(innerRadius, outerRadius);
	_allRingCount += 1;
}

Ring::~Ring()
{
	_allRingCount -= 1;
}

float Ring::CalculateArea()
{
	return (float)PI * (_outerRadius * _outerRadius - _innerRadius * _innerRadius);
}

void Ring::SetRadius(float innerRadius, float outerRadius)
{
	DoubleValidator::AssertPositiveValue((double)outerRadius);
	DoubleValidator::AssertValueInRange((double)innerRadius, 0.0, (double)outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}