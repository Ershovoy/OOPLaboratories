#include "StudentIdGenerator.h"

unsigned int StudentIdGenerator::_lastId = 0;

unsigned int StudentIdGenerator::GetNewId()
{
    _lastId += 1;
    return _lastId;
}

void StudentIdGenerator::SetLastId(unsigned int lastId)
{
    _lastId = lastId;
}