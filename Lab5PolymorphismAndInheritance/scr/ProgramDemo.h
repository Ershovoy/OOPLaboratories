#pragma once

#include "inheritance/IOPerson.h"
#include "refactoring/LoginSystem.h"
#include "refactoring/PaidUser.h"
#include "refactoring/Post.h"
#include "polymorphism/CertificateDiscount.h"
#include "polymorphism/PercentDiscount.h"
#include "polymorphism/IOProduct.h"

/// <summary>
/// Функция по демонстрации работы наследования от класса Person в консоле
/// </summary>
void WritePersonDemoToConsole();

/// <summary>
/// Функция по демонстрации дефакторинга класса User в консоле
/// </summary>
void WriteUserDemoToConsole();

/// <summary>
/// Функция по демонстрации работы системы скидок в консоле
/// </summary>
void WriteDiscountDemoToConsole();