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
		//TODO: Почему по указателю?
		virtual double Calculate(Product* product) = 0;
		//TODO: Зачем публичный конструктор у класса, от которого нельзя создать объект?
		DiscountBase(CategoryType category);
};