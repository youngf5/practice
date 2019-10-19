#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Employee {
public:
	int id;
	int importance;
	vector<int> subordinates;

};

//***************ÄÚ´æÒç³ö*******************
int getImportance(vector<Employee*> employees, int id)
{
	int sum = 0;
	int temp;
	for (int i = 0; i < employees.size(); ++i)
	{
		if (employees[i]->id == id)
			temp = i;
	}
	sum += employees[temp]->importance; 
	if (employees[temp]->subordinates.size())
	{
		for (int j = 0; j < employees[temp]->subordinates.size(); ++j)
		{
			sum += getImportance(employees, employees[temp]->subordinates[j]);
		}
		cout << sum << endl;  
		return sum;
	}
	else
	{
		cout << sum << endl;
		return sum;
	}


}

int main690()
{

	vector<int> v1 = { 2,3 };
	vector<int> v2 ;
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

	getImportance(employees, id);
	system("pause");
	return EXIT_SUCCESS;
}