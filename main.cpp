#include <iostream>
#include <assert.h>
#include "foolib.h"

int main()
{
	//Внешняя глобальная переменная объявлена в файле "foolib.cpp"
	extern FOO_INFO resul_info;

	Foo(FOO_ONE);
	assert(resul_info.param_ == FOO_ONE);
	std::cout << resul_info.info_ << std::endl;

	Foo(FOO_TWO);
	assert(resul_info.param_ == FOO_TWO);
	std::cout << resul_info.info_ << std::endl;

	Foo(FOO_RANDOM);
	assert(resul_info.param_ == FOO_RANDOM);
	std::cout << resul_info.info_ << std::endl;

	return 0;
}
