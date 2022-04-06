#pragma once

#include "Product.h"
#include "ProductCategory.h"

/// <summary>
/// Виктуальный базовый класс для скидок на определённую категорию товаров
/// </summary>
class DiscountBase
{
	/// <summary>
	/// Категория скидочного товара
	/// </summary>
	ProductCategory _category;

	/// <summary>
	/// Установить категорию для скидок
	/// </summary>
	/// <param name="category">Перечесление категории</param>
	void SetCategory(ProductCategory category);

protected:
	// TODO: отсутствует комментарий
	DiscountBase(ProductCategory category);

public:
	/// <summary>
	/// Вычислить конечную стоймость для заданного товара 
	/// </summary>
	/// <param name="product">Заданный товар на скидку</param>
	/// <returns>Цена товара с учётом скидки</returns>
	virtual float CalculateDiscount(Product* product) = 0;

	/// <summary>
	/// Получить скидочную категорию
	/// </summary>
	/// <returns>Перечесление категории</returns>
	ProductCategory GetCategory() const { return _category; }
};