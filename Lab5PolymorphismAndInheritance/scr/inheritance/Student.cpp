#include "Student.h"

void Student::SetAdmissionYear(int admissionYear)
{
	NumberValidator::AssertNumberInRange(admissionYear, 0, 2022);
	_admissionYear = admissionYear;
}

Student::Student(const std::string& firstName,
				 const std::string& secondName, 
				 const std::string& thirdName, 
				 int admissionYear) :
				 Person(firstName, secondName, thirdName)
{
	SetAdmissionYear(admissionYear);
	_id = StudentIdGenerator::GetNewId();
}
