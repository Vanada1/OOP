#pragma once
#include "CategoryType.h"
#include <string>

class Product
{
	private:
		std::string _name;
		CategoryType _category;
		double _cost;

	public:
		void SetName(const std::string& name);
		void SetCategory(CategoryType type);
		void SetCost(double cost);
		const std::string& GetName();
		CategoryType GetCategory();
		double GetCost();
		Product(const std::string& name, CategoryType type, double cost);
		~Product();
};