#include "PercentDiscount.h"
#include <exception>

PercentDiscount::PercentDiscount(double percent, CategoryType category)
	:DiscountBase(category)
{
	this->SetPercent(percent);
}

void PercentDiscount::SetPercent(double percent)
{
	if (percent < 0 || percent>100)
	{
		throw std::exception("Incorrect value");
	}
	this->_percent = percent;
}

double PercentDiscount::GetPercent()
{
	return this->_percent;
}

double PercentDiscount::Calculate(Product* product)
{
	double allCost = 100.0;
	if (product->GetCategory() == this->GetCategory())
	{
		return (product->GetCost() * (allCost - this->GetPercent()) 
			/ allCost);
	}
	return product->GetCost();
}