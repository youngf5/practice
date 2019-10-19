#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

class Employee {
public:
	int id;
	int importance;
	vector<int> subordinates;

};

int getImportanceA(vector<Employee *> e, int id)
{
	int res = 0;
	stack<int> tmp;
	tmp.push(id);
	while (!tmp.empty())
	{
		id = tmp.top();
		tmp.pop();
		for (auto i : e)
		{
			if (i->id == id)
			{
				res += i->importance;
				for (int j : i->subordinates)
					tmp.push(j);
				break;
			}
		}
	}
	cout << res << endl;
	return res;
}

int main690A() {

	vector<int> v1 = { 2,3 };
	vector<int> v2;
	vector<int> v3;
	Employee *p1 = new Employee;
	p1->id = 1;
	p1->importance = 5;
	p1->subordinates = v1;
	Employee *p2 = new Employee;
	p2->id = 2;
	p2->importance = 3;
	p2->subordinates = v2;
	Employee *p3 = new Employee;
	p3->id = 3;
	p3->importance = 3;
	p3->subordinates = v3;

	vector<Employee *>employees;
	employees.push_back(p1);
	employees.push_back(p2);
	employees.push_back(p3);

	int id = 1;

	getImportanceA(employees, id);

	system("pause");
	return EXIT_SUCCESS;
}