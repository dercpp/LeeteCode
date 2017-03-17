#include "stdafx.h"
#include "FizzBuzz.h"
#include <string>


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
