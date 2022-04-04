#include "Product.h"

Product::Product(std::string title, float cost, ProductCategory category)
{
	SetTitle(title);
	SetCost(cost);
	SetCategory(category);
}

void Product::SetTitle(std::string title)
{
	if (!StringValidator::IsAlphanumeric(title))
	{
		throw "Title of product must have only letters or digits.";
	}
	_title = title;
}

void Product::SetCost(float cost)
{
	if (cost < 0 || 100'000 < cost)
	{
		throw "Cost of product must be in range: [0, 100000].";
	}
	_cost = cost;
}

void Product::SetCategory(ProductCategory category)
{
	_category = category;
}