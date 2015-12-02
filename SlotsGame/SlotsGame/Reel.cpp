#include "stdafx.h"
#include "Reel.h"
#include <stdlib.h>


Reel::Reel() 
{
	result = 0;
}

void Reel::spin() 
{
	result = rand() % 4 + 1;
}