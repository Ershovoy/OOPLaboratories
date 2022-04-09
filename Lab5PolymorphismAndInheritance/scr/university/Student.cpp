#include "Student.h"

void Student::SetAdmissionYear(int admissionYear)
{
	NumberValidator::AssertNumberInRange(admissionYear, 0, 2022);
	_admissionYear = admissionYear;
}

Student::Student(const std::string& firstName,
				 const std::string& surname, 
				 const std::string& patronymic, 
				 int admissionYear) :
				 Person(firstName, surname, patronymic)
{
	SetAdmissionYear(admissionYear);
	_id = StudentIdGenerator::GetNewId();
}
