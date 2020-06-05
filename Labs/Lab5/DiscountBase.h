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
		//TODO: ������ �� ���������?(Done)
		virtual double Calculate(Product& product) = 0;
		//TODO: ����� ��������� ����������� � ������, �� �������� ������ ������� ������?(Done)
	protected:
		DiscountBase(CategoryType category);
};