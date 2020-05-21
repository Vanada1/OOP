#include "CollisionManager.h"
#include <cmath>

bool CollisionManager::IsCollision(Rectangle* rectangle1,
	Rectangle* rectangle2)
 {
	double deltaX = abs(rectangle1->GetCenter()->GetX() -
		rectangle2->GetCenter()->GetX());
	double deltaY = abs(rectangle1->GetCenter()->GetY() -
		rectangle2->GetCenter()->GetY());
	double deltaLength = abs(rectangle1->GetLength() -
		rectangle2->GetLength()) ;
	double deltaWidth = abs(rectangle1->GetWidth() -
		rectangle2->GetWidth());
	if (deltaX < deltaWidth / 2 && deltaY < deltaLength / 2)
	{
		return true;
	}
	return false;
}

bool CollisionManager::IsCollision(Ring* ring1, Ring* ring2)
{
	double deltaX = abs(ring1->GetCenter()->GetX() -
		ring2->GetCenter()->GetX());
	double deltaY = abs(ring1->GetCenter()->GetY() -
		ring2->GetCenter()->GetY());
	double hypotenuse = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
	if (hypotenuse < ring1->GetOuterRadius() + ring2->GetOuterRadius())
	{
		return true;
	}
	return false;
}