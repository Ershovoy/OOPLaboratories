#pragma once

#include "DiscountBase.h"

// TODO: + Все заголовочные файлы и файлы исходного кода рассортировать по подпапкам каждой предметной области
/// <summary>
/// Реализация интерфейса скидок для скидочного купона
/// </summary>
class CertificateDiscount : public DiscountBase
{
	/// <summary>
	/// Размер скидочного купона
	/// </summary>
	float _amount;

public:
	/// <summary>
	/// Конструктор с параметрами для скидки по сертификату
	/// </summary>
	/// <param name="category">Категория продукта на которую действует скидка</param>
	/// <param name="amount">Размер скидочного купона</param>
	CertificateDiscount(ProductCategory category, float amount);

	/// <summary>
	/// Вычислить конечную стоймость для заданного товара 
	/// </summary>
	/// <param name="product">Заданный товар на скидку</param>
	/// <returns>Цена товара с учётом скидки</returns>
	float CalculateDiscount(Product* product) override;

	/// <summary>
	/// Задать размер скидочного купона
	/// </summary>
	/// <param name="amount">Новое значение размера скидочного купона</param>
	void SetAmount(float amount);

	/// <summary>
	/// Получить размер скидочного купона
	/// </summary>
	/// <returns>Размер скидочного купона</returns>
	float GetAmount() const { return _amount; }
};