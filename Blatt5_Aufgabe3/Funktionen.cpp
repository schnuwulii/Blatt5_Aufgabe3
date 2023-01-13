#include <stdio.h>
#include <stdlib.h>
#include"Konstanten.h"
#define anzahl 10

int array[anzahl];


void einlesen(int array[])
{
	printf_s("Unsortiertes Array:\n");
	for (int i = 0; i < 10; i++)
	{
		//srand(time(NULL));
		array[i] = rand() % 10;
		printf_s("%d\n", array[i]);
	}

}

void auswahl(int arrayy[])
{
	char c;

	do
	{
		printf_s("\nsort upwards enter \"u\"\nsort downwards enter \"d\"\n");
		scanf_s(" %c", &c);
		if (c == 'u')
		{
			sortierenAuf(arrayy, anzahl);
		}
		else if (c == 'd')
		{
			sortierenAb(arrayy, anzahl);
		}
		else
			printf_s("\nFalsche Eingabe.");
	} while (c != 'u' && c != 'd');
}

void sortierenAuf(int array[], int size)
{


	for (int step = 0; step < size - 1; ++step)
	{
		int swapped = 0;

		for (int i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1;
			}
		}
		if (swapped == 0) {
			break;
		}
	}
}

void sortierenAb(int array[], int size)
{


	for (int step = 0; step < size - 1; ++step)
	{
		int swapped = 0;

		for (int i = 0; i < size - step - 1; ++i)
		{
			if (array[i] < array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1;
			}
		}
		if (swapped == 0) {
			break;
		}
	}
}
void ausgabe(int array[], int size)
{
	printf_s("Sortiertes Array: ");
	for (int i = 0; i < size; ++i) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}
