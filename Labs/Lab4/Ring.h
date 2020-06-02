#pragma once
#include "../General Files/PointClass.h"

class Ring
{
	private:
		static int AllRingsCount;

		double _outerRadius;
		double _innerRadius;
		Point* _center;

		static void AddAllRingsCount();
		static void SubtractAllRingsCount();
		void AssertOnPositiveValue(double value);
	public:
		Ring(double outerRadius, double innerRadius, Point* center);
		Ring(double outerRadius, double innerRadius, double x,
			double y);
		~Ring();

		void SetRadius(double outerRadius, double innerRadius);
		void SetCenter(Point* center);

		static int GetAllRingsCount();
		double GetOuterRadius();
		double GetInnerRadius();
		Point* GetCenter();

		double GetAria();
};