#include "PercentDiscount.h"

PercentDiscount::PercentDiscount(ProductCategory category, 
								 float percent) :
								 DiscountBase(category)
{
	SetPercent(percent);
}

float PercentDiscount::CalculateDiscount(Product* product)
{
	if (product->GetCategory() == GetCategory())
	{
		return product->GetCost() * ((100.0f - GetPercent()) / 100.0f);
	}
	return product->GetCost();
}

void PercentDiscount::SetPercent(float percent)
{
		if (percent < 0.0f || 100.0f < percent)
		{
			throw "Percent dicount must be in range: [0, 100].";
		}
		_percent = percent;
}