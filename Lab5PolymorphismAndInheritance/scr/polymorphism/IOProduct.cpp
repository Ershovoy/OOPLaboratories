#include "IOProduct.h"

void WriteProductCategoryToConsole(ProductCategory category)
{
	switch (category)
	{
		case ProductCategory::HP:
		{
			std::cout << "HP";
			break;
		}
		case ProductCategory::Micromax:
		{
			std::cout << "Micromax";
			break;
		}
		case ProductCategory::Pantum:
		{
			std::cout << "Pantum";
			break;
		}
		case ProductCategory::TV:
		{
			std::cout << "TV";
			break;
		}
		default:
		{
			std::cout << "Unknow category";
			break;
		}
	}
}

void WriteDiscountDifferenceToConsole(DiscountBase* discount, 
									  Product* product)
{
	WriteProductCategoryToConsole(product->GetCategory());
	std::cout << " "
	   		  << product->GetTitle() << "\tOld cost: "
			  << product->GetCost() << "\tNew cost: "
			  << discount->CalculateDiscount(product) << '\n';
}