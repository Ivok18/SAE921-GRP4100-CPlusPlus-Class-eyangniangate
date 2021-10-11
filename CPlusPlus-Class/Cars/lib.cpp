#pragma once
#include "lib.h"
#include <stdlib.h>

int random_int2()
{
	int rand_;
	
	do
	{
		rand_ = rand() % 300;
	} while (rand_ < 0);

	return rand_;
}
