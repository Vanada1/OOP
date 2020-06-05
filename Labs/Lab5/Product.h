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
	//TODO: ����������� ������?(done)
		void SetName(const std::string& name);
		void SetCategory(CategoryType type);
		void SetCost(double cost);
		//TODO: ����������� ������?(done)
		const std::string& GetName();
		CategoryType GetCategory();
		double GetCost();
		//TODO: ����������� ������?(done)
		Product(const std::string& name, CategoryType type, double cost);
		~Product();
};