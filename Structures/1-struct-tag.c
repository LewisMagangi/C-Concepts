#ifndef CAR_H
#define CAR_H
#include <stdio.h>
/**
 *struct car- a new type struct car
 *@age: The age of the employee
 *@name: The name of the employee
 *@salary: The employee's salary
 */
struct {
	char *name;
	int age;
	int salary;
}emp1, emp2;
#endif /* CAR_H */
int manager()
{
	struct {
		char *name;
		int age;
		int salary;

	} manager;
	manager.salary = 65000;
	return (manager.salary);
}
int main()
{
	printf("Manager's Salary: %d\n", manager());
	return (0);
}
