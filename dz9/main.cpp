#include "classes.h"

int main()
{
	const int size = 7;
	Property* arr[size];
	double tax = 0;
	for (int i = 0; i < size; i++)
	{
		if (i < 3)
		{
			arr[i] = new Car(rand() % 3000);
		}
		else if (i >= 3 and i <= 4) {
			arr[i] = new Apartament(rand() % 3000);
		}
		else {
			arr[i] = new CountryHouse(rand() % 3000);
		}

	}
	for (int i = 0; i < size; i++)
	{
		tax += arr[i]->Tax();
		arr[i]->get_worth();
		delete arr[i];

	}
	cout << tax;
}