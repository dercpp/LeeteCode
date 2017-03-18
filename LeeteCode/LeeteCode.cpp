// LeeteCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int main()
{
	Solution LeeteCode = Solution();
	cout << LeeteCode.hammingDistance(1, 4) << endl;
	cout << endl;
	for each (string var in LeeteCode.fizzBuzz(15))
	{
		cout << var << endl;
	}
	cout << endl;
	cout << LeeteCode.reverseString("Hello") << endl;
	cout << endl;
	cout << LeeteCode.decode(LeeteCode.encode("https://leetcode.com/problems/design-tinyurl")) << endl;
	cout << endl;
    return 0;
}

