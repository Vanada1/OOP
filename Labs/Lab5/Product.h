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
		void SetName(std::string& name);
		void SetCategory(CategoryType type);
		void SetCost(double cost);

		std::string GetName();
		CategoryType GetCategory();
		double GetCost();

		Product(std::string& name, CategoryType type, double cost);
		~Product();
};