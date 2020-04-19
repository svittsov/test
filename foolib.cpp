#include "foolib.h"
#include <stdlib.h>

FOO_INFO resul_info;


int Foo (int param)
{
	resul_info.param_ = param;
	
	switch (param) {
		case FOO_ONE:
			resul_info.info_ = "One";
		break;
		case FOO_TWO:
			resul_info.info_ = "Two";
		break;
		case FOO_RANDOM:
			resul_info.info_ = (rand() % 2) ? "One" : "Two";
		break;
		default:
			resul_info.info_ = "Unknown";
		break;
	}
	return 0;
}
