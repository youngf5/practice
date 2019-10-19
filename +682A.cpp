/*��������֮һ��
1.������һ�ֵĵ÷֣���ֱ�ӱ�ʾ���ڱ����л�õĻ�������
2. "+"��һ�ֵĵ÷֣�����ʾ���ֻ�õĵ÷���ǰ������Ч?�غϵ÷ֵ��ܺ͡�
3. "D"��һ�ֵĵ÷֣�����ʾ���ֻ�õĵ÷���ǰһ����Ч?�غϵ÷ֵ�������
4. "C"��һ���������ⲻ��һ���غϵķ���������ʾ����õ����һ����Ч?�غϵķ�������Ч�ģ�Ӧ�ñ���
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
	stack<int>res;        //ջ
	int result = 0;
	for (int i = 0; i < ops.size(); ++i)
	{
		const char *p = ops[i].data();         // ***********���ַ���ת�����ַ���
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
			stringstream ss(ops[i]);   //����һ���ַ���������ops[i]ȥ��ʼ��, stringstream����ͷ�ļ�sstream
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