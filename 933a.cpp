/*дһ��?RecentCounter?�����������������

��ֻ��һ��������ping(int t)������?t?�����Ժ���Ϊ��λ��ĳ��ʱ�䡣

���ش� 3000 ����ǰ�����ڵ�?ping?����

�κδ���?[t - 3000, t]?ʱ�䷶Χ֮�ڵ� ping?�����ᱻ�������ڣ�������ǰ��ָ t?ʱ�̣��� ping��

��֤ÿ�ζ� ping �ĵ��ö�ʹ�ñ�֮ǰ����� t ֵ��

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
	queue<int>q;         //����һ��ָ��int���͵Ķ���
public:
	RecentCounter() {}    //����һ���ղι���
	
	int ping(int t) {
		q.push(t);       //   t���
		int last = q.back();     //��βԪ�ظ�ֵ��last
		while (1)
		{
			if (q.front() < last - 3000)     //�жϵ�����Ԫ��С�ڶ�βԪ�ؼ�3000
			{
				q.pop();           //����
			}
			else break;         //����Ԫ�ش��ڵ��ڶ�βԪ�ؼ�3000������ѭ��
		}
		return q.size();       //���ض���q �Ĵ�С
	}
};




int main933A() {



	system("pause");
	return EXIT_SUCCESS;
}