#include<iostream>
#include<conio.h>
using namespace std;

class Employee
{
public:
	int salary, hours;
	string name;
	Employee(int a, int b, string st)
	{
		salary = a;
		hours = b;
		name = st;
	}
	//virtual void calculate_bonus ()=0;   //OR
	virtual void calculate_bonus ()
	{

	}

};

class manager : public Employee
{
public:
	int bonus;
	manager(int a, int b, string st) : Employee(a, b, st) {}
	void calculate_bonus()
	{
		bonus = (salary * 10)/100; //If 10% of the salary is bonus
		cout<<"Manager bonus: "<<bonus<<endl;
	}
};

class worker : public Employee
{
public:
	int bonus;
	worker(int a, int b, string st) : Employee(a, b, st) {}
	void calculate_bonus()
	{
		bonus = 500 * hours;
		cout<<"Worker bonus: "<<bonus<<endl;
	}
};
int main()
{

Employee *emp[2];
emp[0] = new manager(500000, 8, "Jalal");
emp[0]->calculate_bonus();
emp[1] = new worker(500000, 8, "Jalal");
emp[1]->calculate_bonus();
for (int i = 0; i < 2; ++i)
	{
		delete emp[i];
	}

}