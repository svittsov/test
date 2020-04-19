#ifndef FOOLIB_H
#define FOOLIB_H

#include <string>

typedef struct tagFOO_INFO
{
	std::string info_;
	int param_;
} FOO_INFO;


enum {
	FOO_ONE,
	FOO_TWO,
	FOO_RANDOM
};

int Foo (int param);

#endif // FOOLIB_H
