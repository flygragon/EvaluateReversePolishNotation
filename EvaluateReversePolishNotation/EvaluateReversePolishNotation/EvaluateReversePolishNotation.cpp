// EvaluateReversePolishNotation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"EvaluateReversePolishNotation.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> nums(n);
	for (int i = 0; i < n; cin >> nums[i++]);
	cout << getValOfRPN.evalRPN(nums) << '\n';
	exit(0);

    return 0;
}

