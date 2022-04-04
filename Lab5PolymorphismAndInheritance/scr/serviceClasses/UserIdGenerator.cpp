#include "UserIdGenerator.h"

unsigned int UserIdGenerator::_lastId = 0;

unsigned int UserIdGenerator::GetNewId()
{
    _lastId += 1;
    return _lastId;
}

void UserIdGenerator::SetLastId(unsigned int lastId)
{
    _lastId = lastId;
}