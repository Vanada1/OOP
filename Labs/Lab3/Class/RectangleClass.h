#pragma once
#include "../../General Files/PointClass.h"

class Rectangle
{
	private:
		Point* _center;
		double _length;
		double _width;
		void CheckNegative(double number);

	public:
		void SetCenter(double x, double y);
		void SetLength(double length);
		void SetWidth(double width);

		Point* GetCenter();
		double GetLength();
		double GetWidth();


		Rectangle(double x, double y, double length, double width);
		~Rectangle();

};