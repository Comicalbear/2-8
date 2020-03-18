#include "jisuanqi.h"
#include <iostream>
using namespace std;



int jisuanqi::jisuan()
{
	int jieguo=NULL;
	switch (z)
	{
	case '+':
		jieguo = x + y;
		break;
	case '-':
		jieguo = x - y;
		break;
	case '*':
		jieguo = x * y;
		break;
	case '/':
		jieguo = x / y;
		break;
	default:cout << "请输入正确的符号" << endl;
		break;
	}
	return jieguo;
}

void jisuanqi::shuru()
{
	cin >> x >> z >> y;
}

bool jisuanqi::Equals()
{
	if (x = y)
		return true;
	else
		return false;
}


