#include <iostream>
#include "test.h"
int main(void) {
	octest::testClass* p1 = octest::OPtestClass();	// 创建对象
	p1->set(12);									// 使用对象
	std::cout << p1->get() << std::endl;			// 使用获取接口
	return 0;
}