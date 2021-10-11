#include "Utils.h"
#include <stdlib.h>

int random(int min, int max)
{
    int rand_;
	do
	{
		rand_ = min + (rand() % (max - min));
	} while (rand_ < min);

	return rand_;
}
