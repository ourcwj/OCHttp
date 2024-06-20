#include "pch.h"
#include "testClass.h"

testClass::testClass()
{
    testInt = 0;
}

testClass::~testClass()
{
}

int testClass::set(int a)
{
    testInt = a;
    return 0;
}

int testClass::get()
{
    return testInt;
}
