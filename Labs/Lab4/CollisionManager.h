#pragma once
#include "../General Files/RectangleClass.h"
#include "Ring.h"

static class CollisionManager
{
	public:
	//TODO: сделать ссылками, а не указателями
		static bool IsCollision(Rectangle* rectangle1,
			Rectangle* rectangle2);
		static bool IsCollision(Ring* ring1, Ring* ring2);
};

