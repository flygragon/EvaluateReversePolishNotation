#pragma once
#include<vector>
#include<stack>
#include<string>

class  EvaluateReversePolishNotation{
public:
	int evalRPN(std::vector<std::string>& tokens) {
		std::stack<int> s;
		int temp;
		for (int i = 0, len = tokens.size(); i <len; i++)
			if (tokens[i] != "+"
				&& tokens[i] != "-"
				&& tokens[i] != "*"
				&& tokens[i] != "/")
				s.push(atoi(tokens[i].c_str()));
			else {
				temp = s.top();
				s.pop();
				if (tokens[i] == "+")
					s.top() += temp;
				else if (tokens[i] == "-")
					s.top() -= temp;
				else if (tokens[i] == "*")
					s.top() *= temp;
				else
					s.top() /= temp;
			}
			return s.top();
	}
} getValOfRPN;