#include "stdafx.h"
#include "Solution.h"


Solution::Solution()
{
}


Solution::~Solution()
{
}

/*
**
**	461. Hamming Distance
**	https://leetcode.com/problems/hamming-distance/
**	The Hamming distance between two integers is the number of positions
**	at which the corresponding bits are different.
**	Given two integers x and y, calculate the Hamming distance.
**	Note:
**		0 ¡Ü x, y < 231.
**	Example:
**	Input: x = 1, y = 4
**	Output: 2
**	Explanation:
**		1   (0 0 0 1)
**		4   (0 1 0 0)
¡ü   ¡ü
**	The above arrows point to positions where the corresponding bits are different.
**
*/
int Solution::hammingDistance(int x, int y)
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

/*
**
**	412. Fizz Buzz
**	https://leetcode.com/problems/fizz-buzz/
**	Write a program that outputs the string representation of numbers from 1 to n.
**	But for multiples of three it should output ¡°Fizz¡± instead of the number
**	and for the multiples of five output ¡°Buzz¡±.
**	For numbers which are multiples of both three and five output ¡°FizzBuzz¡±.
**	Example:
**		n = 15,
**	Return:
**	[
**		"1",
**		"2",
**		"Fizz",
**		"4",
**		"Buzz",
**		"Fizz",
**		"7",
**		"8",
**		"Fizz",
**		"Buzz",
**		"11",
**		"Fizz",
**		"13",
**		"14",
**		"FizzBuzz"
**	]
**
*/
std::vector<std::string> Solution::fizzBuzz(int n)
{
	std::vector<std::string> vec;
	for (int h = 1; h <= n; h++)
	{
		if ((h % 3 == 0) && (h % 5 != 0))
			vec.push_back("Fizz");
		else if ((h % 3 == 0) && (h % 5 == 0))
			vec.push_back("FizzBuzz");
		else if (h % 5 == 0)
			vec.push_back("Buzz");
		else
		{
			vec.push_back(std::to_string(h));
		}
	}
	return vec;
}
