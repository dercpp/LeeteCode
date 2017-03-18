#pragma once
#include <unordered_map>
class Solution
{
private:
	std::string dict = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int id = 0;
	std::unordered_map<std::string, std::string> m;  //key is longURL, value is shortURL
	std::unordered_map<int, std::string> idm;  //key is id in DB, value is longURL

public:
	Solution();
	~Solution();
	//461. Hamming Distance
	int hammingDistance(int x, int y);

	//412. Fizz Buzz
	std::vector<std::string> fizzBuzz(int n);

	//344. Reverse String
	std::string reverseString(std::string s);

	//535. Encode and Decode TinyURL
	std::string encode(std::string longUrl);
	std::string decode(std::string shortUrl);
};

