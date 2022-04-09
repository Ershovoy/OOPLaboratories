#pragma once

#include "university/IOPerson.h"
#include "users/LoginSystem.h"
#include "users/PaidUser.h"
#include "users/Post.h"
#include "discountSystem/CertificateDiscount.h"
#include "discountSystem/PercentDiscount.h"
#include "discountSystem/IOProduct.h"

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