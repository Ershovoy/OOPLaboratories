#pragma once

#include "Person.h"
#include "Student.h"
#include "Teacher.h"

#include <iostream>

/// <summary>
/// Вывести имя, фамилию, отчество заданного человека 
/// </summary>
/// <param name="person">Человек имя, фамилию, отчество, 
///						 которого нужно вывести
/// </param>
void WriteNamesToConsole(Person* person);