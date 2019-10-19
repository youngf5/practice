/*写一个?RecentCounter?类来计算最近的请求。

它只有一个方法：ping(int t)，其中?t?代表以毫秒为单位的某个时间。

返回从 3000 毫秒前到现在的?ping?数。

任何处于?[t - 3000, t]?时间范围之内的 ping?都将会被计算在内，包括当前（指 t?时刻）的 ping。

保证每次对 ping 的调用都使用比之前更大的 t 值。

*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<queue>
using namespace std;

class RecentCounter {
private:
	queue<int>q;         //定义一个指向int类型的队列
public:
	RecentCounter() {}    //定义一个空参构造
	
	int ping(int t) {
		q.push(t);       //   t入队
		int last = q.back();     //队尾元素赋值给last
		while (1)
		{
			if (q.front() < last - 3000)     //判断当队首元素小于队尾元素减3000
			{
				q.pop();           //出队
			}
			else break;         //队首元素大于等于队尾元素减3000，跳出循环
		}
		return q.size();       //返回队列q 的大小
	}
};




int main933A() {



	system("pause");
	return EXIT_SUCCESS;
}