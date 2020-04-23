#pragma once
#include "PointClass.h"

class Rectangle
{
	private:
		Point* _center;
		double _length;
		double _width;

	public:
		void SetCenter(double x, double y);
		void SetLength(double length);
		void SetWidth(double width);

		double GetCenterX();
		double GetCenterY();
		double GetLength();
		double GetWidth();


		Rectangle(double x, double y, double length, double width);
		~Rectangle();

};