#include "ShowCheckWithDiscount.h"
#include "PercentDiscount.h"
#include <iostream>

using namespace std;

void ShowCheckWithDiscount(DiscountBase* discount, Product** products,
	int productsCount)
{
	double allCost = 0;
	for (int i = 0; i < productsCount; i++)
	{
		cout << products[i]->GetName() << '\t' << "Old cost: " 
			<< products[i]->GetCost() << '\t';
		double newCost = discount->Calculate(*products[i]);
		cout << "New cost: " << newCost << endl;
		allCost += newCost;
	}
	cout << "Full Cost with Discount: " << allCost << endl;
}