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

		Point* GetCenter();
		double GetLength();
		double GetWidth();


		Rectangle(double length, double width, double x, double y);
		~Rectangle();

};