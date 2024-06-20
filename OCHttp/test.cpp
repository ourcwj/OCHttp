#include "pch.h"
#include "Perdefine.h"
#include "test.h"
#include "../testLib/testClass.h"

OCAPI octest::testClass* octest::OPtestClass() {
	return new ::testClass;
}
