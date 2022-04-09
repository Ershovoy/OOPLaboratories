#pragma once

#include "ProductCategory.h"
#include "DiscountBase.h"

#include <iostream>

/// <summary>
/// Вывести заданную категорию продукта в консоль
/// </summary>
/// <param name="category">Категория для вывода</param>
void WriteProductCategoryToConsole(ProductCategory category);

/// <summary>
/// Вывести разницу в цене на товар с учётом и без учёта скидки
/// </summary>
/// <param name="discount">Скидка применяемая к данному типу товара</param>
/// <param name="product">Продукт расчитываемый на скидку</param>
void WriteDiscountDifferenceToConsole(DiscountBase* discount,
									  Product* product);