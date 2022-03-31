#include "CollisionManager.h"

bool CollisionManager::IsCollision(const Rectangle& first, const Rectangle& second)
{
	float dx = abs(first.GetCentreX() - second.GetCentreX());
	float dy = abs(first.GetCentreY() - second.GetCentreY());

	if (dx <= (first.GetWidth() + second.GetWidth()) / 2 
		&& (dy <= (first.GetLength() + second.GetLength()) / 2))
	{
		return true;
	}
	return false;
}

bool CollisionManager::IsCollision(const Ring& first, const Ring& second)
{
	Point firstCentre = first.GetCentre();
	Point secondCentre = second.GetCentre();
	float distance = (float)sqrt(pow(abs(firstCentre.GetX() - secondCentre.GetX()), 2)
		+ pow(abs(firstCentre.GetY() - secondCentre.GetY()), 2));

	if (distance <= (first.GetOuterRadius() + second.GetOuterRadius()))
	{
		return true;
	}
	return false;
}
