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
		// TODO: + нужно кидать не строки, а объекты класса exception()
		throw std::exception("Title of product must have only letters or digits.");
	}
	_title = title;
}

void Product::SetCost(float cost)
{
	// TODO: + есть же валидатор на диапазон
	// TODO: + нужно кидать не строки, а объекты класса exception()
	NumberValidator::AssertNumberInRange(cost, 0.0f, 100'000.0f, "Product cost");
	_cost = cost;
}

void Product::SetCategory(ProductCategory category)
{
	_category = category;
}