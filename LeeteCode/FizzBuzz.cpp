#include "stdafx.h"
#include "FizzBuzz.h"
#include <string>

/*
**
**	412. Fizz Buzz
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

FizzBuzz::FizzBuzz()
{
}


FizzBuzz::~FizzBuzz()
{
}

std::vector<std::string> FizzBuzz::fizzBuzz(int n)
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
			vec.push_back(std:: to_string(h));
		}
	}
	return vec;
}
