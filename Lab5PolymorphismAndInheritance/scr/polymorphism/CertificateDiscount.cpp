#include "CertificateDiscount.h"

CertificateDiscount::CertificateDiscount(ProductCategory category,
										 float amount) :
										 DiscountBase(category)
{
	SetAmount(amount);
}

float CertificateDiscount::CalculateDiscount(Product* product)
{
	if (product->GetCategory() == GetCategory())
	{
		float discountAmount = GetAmount();
		float productCost = product->GetCost();
		float difference = abs(productCost - discountAmount);
		if (productCost <= discountAmount)
		{
			SetAmount(discountAmount - productCost);
			return 0.0f;
		}
		else
		{
			SetAmount(0.0f);
			return productCost - discountAmount;
		}
	}
	return product->GetCost();
}

void CertificateDiscount::SetAmount(float amount)
{
	if (amount < 0.0f || 100.0f < amount)
	{
		throw "Certificate dicount must be in range: [0, 100].";
	}
	_amount = amount;
}
