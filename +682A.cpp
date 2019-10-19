/*四种类型之一：
1.整数（一轮的得分）：直接表示您在本轮中获得的积分数。
2. "+"（一轮的得分）：表示本轮获得的得分是前两轮有效?回合得分的总和。
3. "D"（一轮的得分）：表示本轮获得的得分是前一轮有效?回合得分的两倍。
4. "C"（一个操作，这不是一个回合的分数）：表示您获得的最后一个有效?回合的分数是无效的，应该被移
*/

// ["5","2","C","D","+"]


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

int calPoints(vector<string> &ops)
{
	if (ops.empty())
		return 0;
	stack<int>res;        //栈
	int result = 0;
	for (int i = 0; i < ops.size(); ++i)
	{
		const char *p = ops[i].data();         // ***********将字符串转换成字符型
		switch (*p)
		{
		case '+':                                    
		{
			if (res.empty())
				res.push(0);
			else if (res.size() == 1)
				res.push(res.top());
			else
			{
				int temp = res.top();
				res.pop();
				int sumt = res.top() + temp;
				res.push(temp);
				res.push(sumt);
			}
			result += res.top();
			break;
		}
		case 'D':
		{
			if (res.empty())
				res.push(0);
			else
			{
				res.push(2 * res.top());
				result += res.top();
			}
			break;
		}
		case 'C':
		{
			if (res.empty())
				continue;
			else
			{
				result -= res.top();
				res.pop();
			}
			break;
		}
		default:
		{
			stringstream ss(ops[i]);   //定义一个字符串流并用ops[i]去初始化, stringstream属于头文件sstream
			int t;
			ss >> t;
			res.push(t);
			result += res.top();
		}
		}
	}
	cout << result << endl;
	return result;
}

int main682A() {
	vector<string> ops ={ "5","2","C","D","+" };
	calPoints(ops);

	system("pause");
	return EXIT_SUCCESS;
}