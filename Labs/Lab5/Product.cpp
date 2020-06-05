#include "Product.h"
#include <exception>

Product::Product(const std::string& name, CategoryType type, double cost)
{
	this->SetName(name);
	this->SetCategory(type);
	this->SetCost(cost);
}

Product::~Product()
{

}

void Product::SetName(const std::string& name)
{
	this->_name = name;
}

void Product::SetCategory(CategoryType type)
{
	this->_category = type;
}

void Product::SetCost(double cost)
{
	const double maxCost = 100000.0;
	if (cost < 0)
	{
		throw std::exception("Cost less than zero");
	}
	if (cost > maxCost)
	{
		throw std::exception("Cost is greater than the maximum value");
	}
	this->_cost = cost;
}

const std::string& Product::GetName()
{
	return this->_name;
}

CategoryType Product::GetCategory()
{
	return this->_category;
}

double Product::GetCost()
{
	return this->_cost;
}