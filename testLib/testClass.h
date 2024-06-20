#pragma once
#include "test.h"

class testClass :public octest::testClass
{
public:
	testClass();
	~testClass();

	int set(int a);
	int get();

protected:
	int testInt;
};

