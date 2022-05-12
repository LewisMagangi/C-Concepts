#include<stdio.h>
/**
 *struct car- a new type struct car
 *@age: The age of the employee
 *@name: The name of the employee
 *@salary: The employee's salary
 */
typedef struct employee{
	char *name;
	int age;
	int salary;
}employee;

int manager()
{
	employee manager;
	manager.salary = 65000;

	return (manager.salary);
}
int main()
{
	employee emp1;
	employee emp2;

	emp1.salary = 50000;
	emp2.salary = 35000;

	printf("Manager's Salary: %d\n", manager());
	printf("1st Employer's Salary: %d\n", emp1.salary);
	printf("2nd Employer's Salary: %d\n", emp2.salary);
	return (0);
}
