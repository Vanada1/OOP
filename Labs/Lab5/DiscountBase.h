#pragma once
#include "CategoryType.h"
#include "Product.h"

class DiscountBase
{
	private:
		CategoryType _category;
		void SetCategory(CategoryType category);

	public:
		CategoryType GetCategory();
		//TODO: ������ �� ���������?
		virtual double Calculate(Product* product) = 0;
		//TODO: ����� ��������� ����������� � ������, �� �������� ������ ������� ������?
		DiscountBase(CategoryType category);
};