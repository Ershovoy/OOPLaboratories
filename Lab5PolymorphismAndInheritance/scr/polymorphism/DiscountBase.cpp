#include "DiscountBase.h"

void DiscountBase::SetCategory(ProductCategory category)
{
	_category = category;
}

DiscountBase::DiscountBase(ProductCategory category)
{
	SetCategory(category);
}