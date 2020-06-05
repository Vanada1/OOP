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
	//TODO: Константные ссылки?
		void SetName(std::string& name);
		void SetCategory(CategoryType type);
		void SetCost(double cost);
		//TODO: Константные ссылки?
		std::string GetName();
		CategoryType GetCategory();
		double GetCost();
		//TODO: Константные ссылки?
		Product(std::string& name, CategoryType type, double cost);
		~Product();
};