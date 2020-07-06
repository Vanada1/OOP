#include "CertificateDiscount.h"
#include <exception>

CertificateDiscount::CertificateDiscount(double amount, CategoryType category)
	: DiscountBase(category)
{
	this->SetAmount(amount);
}

void CertificateDiscount::SetAmount(double amount)
{
	double maxValue = 10000.0;
	if (amount < 0)
	{
		throw std::exception("Amount less than zero");
	}
	if (amount > maxValue)
	{
		throw std::exception("Amount is greater than the maximum value");
	}
	this->_amount = amount;
}

double CertificateDiscount::GetAmount()
{
	return this->_amount;
}

double CertificateDiscount::Calculate(Product& product)
{
	if (product.GetCategory() != this->GetCategory())
	{
		return product.GetCost();
	}
	if (product.GetCost() - this->GetAmount() <= 0)
	{
		this->SetAmount(this->GetAmount() - product.GetCost());
		return 0;
	}
	double newCost = product.GetCost() - this->GetAmount();
	this->SetAmount(0);
	return newCost;
}