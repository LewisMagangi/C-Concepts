#include <stdio.h>
/**
 *struct car- a new type struct car
 *@engine: The name of the engine
 *@fuel_type: The car's fuel's type
 *@fuel_tank_cap: The fuel's tank capacity
 *@seating_cap: seating capacity
 *@city_mileage: the cat mileage
 */
struct car
{
	char *engine;
	char *fuel_type;
	int fuel_tank_cap;
	int seating_cap;
	float city_mileage;
}car1, car2;
int main()
{
	struct car c1 = {"DDis 190 Engine", "Diesel", 37, 5, 19.74};
	struct car c2 = {"Kappa", "Petrol", 22, 8, 14.5};

	car1.engine = "DDis 190 Engine";
	car2.engine = "1.2 Kappa Dual VTVT";
	printf("Car1 Engine: %s\n", car1.engine);
	printf("c1 City Mileage: %f\n", c1.city_mileage);
	printf("c2 Fuel Type: %s\n", c2.fuel_type);
	printf("Car2 Engine: %s\n", car2.engine);
	return (0);
}
