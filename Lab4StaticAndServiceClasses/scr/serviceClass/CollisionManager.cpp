#include "CollisionManager.h"

bool CollisionManager::IsCollision(const Rectangle& first, const Rectangle& second)
{
	float dx = abs(first.GetCentreX() - second.GetCentreX());
	float dy = abs(first.GetCentreY() - second.GetCentreY());

	// TODO: + просто return всего условия, не надо if
	return dx <= (first.GetWidth() + second.GetWidth()) / 2
		&& (dy <= (first.GetLength() + second.GetLength()) / 2);
}

bool CollisionManager::IsCollision(const Ring& first, const Ring& second)
{
	Point firstCentre = first.GetCentre();
	Point secondCentre = second.GetCentre();
	float distance = (float)sqrt(pow(abs(firstCentre.GetX() - secondCentre.GetX()), 2)
		+ pow(abs(firstCentre.GetY() - secondCentre.GetY()), 2));

	// TODO: + return значения из условия. Не надо if
	return distance <= (first.GetOuterRadius() + second.GetOuterRadius());
}
