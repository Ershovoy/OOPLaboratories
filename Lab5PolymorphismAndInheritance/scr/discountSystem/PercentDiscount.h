#pragma once

#include "DiscountBase.h"
#include "..\serviceClasses\NumberValidator.h"

/// <summary>
/// Реализация интерфейса процентный скидок от виртуального класса DiscountBase
/// </summary>
class PercentDiscount : public DiscountBase
{
	/// <summary>
	/// Процент скидки
	/// </summary>
	float _percent;

public:
	/// <summary>
	/// Конструктор с параметрами для процентной скидки
	/// </summary>
	/// <param name="category">Категория товара на которую действует скидка</param>
	/// <param name="percent">Процент скидки</param>
	PercentDiscount(ProductCategory category, float percent);

	/// <summary>
	/// Вычислить конечную стоймость для заданного товара 
	/// </summary>
	/// <param name="product">Заданный товар на скидку</param>
	/// <returns>Цена товара с учётом скидки</returns>
	float CalculateDiscount(Product* product) override;

	/// <summary>
	/// Задать процент скидки
	/// </summary>
	/// <param name="percent">Новое значение скидки</param>
	void SetPercent(float percent);

	/// <summary>
	/// Получить значение процента скидки
	/// </summary>
	/// <returns>Значение скидки</returns>
	float GetPercent() const { return _percent; }
};