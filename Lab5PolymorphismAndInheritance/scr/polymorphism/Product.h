#pragma once

#include "ProductCategory.h"
#include "..\serviceClasses\StringValidator.h"

#include <string>

/// <summary>
/// Класс описывающий продукт в магазине
/// </summary>
class Product
{
	/// <summary>
	/// Название товара
	/// </summary>
	std::string _title;

	/// <summary>
	/// Цена товара
	/// </summary>
	float _cost;

	/// <summary>
	/// Категория товара
	/// </summary>
	ProductCategory _category;

public:
	// TODO: здесь и во всех остальных классах добавить комментарии к конструкторам
	Product(std::string title, float cost, ProductCategory category);

	/// <summary>
	/// Задать название данного продукта
	/// </summary>
	/// <param name="title">Название</param>
	void SetTitle(std::string title);

	/// <summary>
	/// Установить цену для данного товара
	/// </summary>
	/// <param name="cost">Новая цена товара</param>
	void SetCost(float cost);

	/// <summary>
	/// Установить категорию товара
	/// </summary>
	/// <param name="category">Категория товара</param>
	void SetCategory(ProductCategory category);

	/// <summary>
	/// Получить название товара
	/// </summary>
	/// <returns>строковое название</returns>
	std::string GetTitle() const { return _title; }

	/// <summary>
	/// Получить цену данного товара
	/// </summary>
	/// <returns>Цена</returns>
	float GetCost() const { return _cost; }

	/// <summary>
	/// Получить категорию товара
	/// </summary>
	/// <returns>Перечесление категории товара</returns>
	ProductCategory GetCategory() const { return _category; }
};