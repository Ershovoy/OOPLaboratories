#include "IOTime.h"

std::ostream& operator<<(std::ostream& outputStream, const Time& time)
{
	outputStream << time.GetYear() << "." << time.GetMonth() << "." << time.GetDay()
		<< " " << time.GetHour() << ":" << time.GetMinute();
	return outputStream;
}
