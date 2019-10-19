#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
#include<conio.h>
#include<string>
using namespace std;

class MyQueue
{
public:
	MyQueue()
	{

	}

	void push(int x)
	{
		s1.push(x);
	}

	int pop()
	{
		int len = s1.size();
		for (int i = 0; i < len; ++i)
		{
			s2.push(s1.top());
			s1.pop();
		}
		int res = s2.top();
		s2.pop();
		len = len - 1;
		for (int i = 0; i < len; ++i)
		{
			s1.push(s2.top());
			s2.pop();
		}
		cout << res << endl;
		return res;
	}

	int peek()
	{
		int len = s1.size();
		for (int i = 0; i < len;++i)
		{ 
			s2.push(s1.top());
			s1.pop();
		}
		int res = s2.top();
		len = len - 1;
		for (int i = 0; i < len; ++i)
		{
			s1.push(s2.top());
			s2.pop();
		}
		cout << res << endl;
		return res;
	}

	bool empty()
	{
		if (s1.empty() && s2.empty())
			return true;
		return false;
	}
private:
	stack<int> s1;
	stack<int> s2;
};

int main232B() {
	MyQueue queue;
	queue = MyQueue();
	queue.push(1);
	queue.push(2);
	queue.peek();
	queue.pop();
	queue.empty();


	system("pause");
	return EXIT_SUCCESS;
}