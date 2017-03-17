#include "stdafx.h"
#include "HammingDistance.h"


HammingDistance::HammingDistance()
{
}


HammingDistance::~HammingDistance()
{
}

int HammingDistance::hammingDistance(int x, int y)
{
	int num = x^y;
	int sum = 0;
	while (num)
	{
		if (num & 1)
		{
			sum++;
		}
		num /= 2;
	}
	return sum;
}
