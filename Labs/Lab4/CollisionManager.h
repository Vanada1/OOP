#pragma once
#include "../General Files/RectangleClass.h"
#include "Ring.h"

static class CollisionManager
{
	public:
	//TODO: ������� ��������, � �� �����������
		static bool IsCollision(Rectangle* rectangle1,
			Rectangle* rectangle2);
		static bool IsCollision(Ring* ring1, Ring* ring2);
};

