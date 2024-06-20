#pragma once
#include "Perdefine.h"
namespace octest {

	class testClass {
	public:

		virtual int set(int a) = 0;
		virtual int get() = 0;

	protected:


	};

	OCAPI octest::testClass* OPtestClass();

}