#include "StudentIdGenerator.h"

unsigned int StudentIdGenerator::_lastId = 0;

unsigned int StudentIdGenerator::GetId()
{
    return _lastId;
}

void StudentIdGenerator::IncreamentId()
{
    _lastId += 1;
}

unsigned int StudentIdGenerator::GetNewId()
{
    unsigned int newUniqueId = GetId();
    IncreamentId();
    return newUniqueId;
}

void StudentIdGenerator::SetLastId(unsigned int lastId)
{
    _lastId = lastId;
}