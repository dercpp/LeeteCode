#include "stdafx.h"
#include "Solution.h"
using namespace std;


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
vector<string> Solution::fizzBuzz(int n)
{
	std::vector<string> vec;
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

/*
**
**	344. Reverse String
**	https://leetcode.com/problems/reverse-string/
**	Write a function that takes a string as input and returns the string reversed.
**	Example:
**	Given s = "hello", return "olleh". 
**
*/
string Solution::reverseString(string s)
{
	int start = 0;
	int length = s.length() - 1;
	
	while (start < length)
	{
		swap(s[start++], s[length--]);
	}
	return s;
}

/*
**
**	535. Encode and Decode TinyURL
**	https://leetcode.com/problems/encode-and-decode-tinyurl/
**	TinyURL is a URL shortening service where you enter 
**	a URL such as https://leetcode.com/problems/design-tinyurl 
**	and it returns a short URL such as http://tinyurl.com/4e9iAk.
**	Design the encode and decode methods for the TinyURL service.
**	There is no restriction on how your encode/decode algorithm should work.
**	You just need to ensure that a URL can be encoded to a tiny URL 
**	and the tiny URL can be decoded to the original URL.
**
*/
string Solution::encode(string longUrl)
{
	if (m.find(longUrl) != m.end())return m[longUrl];
	string res = "";
	id++;
	int count = id;
	while (count > 0)
	{
		res = dict[count % 62] + res;
		count /= 62;
	}
	while (res.size() < 6)
	{
		res = "0" + res;
	}
	m[longUrl] = res;
	idm[id] = longUrl;
	return res;
}
string Solution::decode(string shortUrl) {
	int id = 0;
	for (int i = 0; i < shortUrl.size(); i++)
	{
		id = 62 * id + (int)(dict.find(shortUrl[i]));
	}
	if (idm.find(id) != idm.end())return idm[id];
	return "";
}

