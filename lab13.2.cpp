#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define N 2
#define RIZNYCA(x, y) (x-y)
#define SUM(x, y) (x+y)
#define MODUL(riznyca) (abs(riznyca))
#define SQR(x) (x)*(x) 
#define MIN(left,right) ((left)<(right))?(left):(right) 
#define MAX(left,right) ((left)>(right))?(left):(right) 
#define PRINTI(w) puts("Значення"); \
 printf(#w"= %d\n",w)
#define PRINTR(w) puts ("Результат :"); \
 printf (#w"= %f\n",(float)w)

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z,
		left, right, // допоміжні змінні
		result; // мінімальне (максимальне) серед двох (трьох) чисел
	char ch;
	do
	{
#if N == 1
		puts("Визначити максимальне число серед двох");
		puts("Введіть 2 числа (x,y)");
		scanf_s("%d", &x);
		PRINTI(x);
		scanf_s("%d", &y);
		PRINTI(y);
		left = RIZNYCA(x, y);
		left = SQR(left);
		right = RIZNYCA(y, x);
		right = MODUL(right);
		result = MIN(left, right);
		PRINTR(result);
		puts("Повторити? y /n "); ch = _getch();
#else // N != 1
		{
			puts("Знайти мінімальне серед двох");
			puts("Введіть 3 числа (x,y,z)");
			scanf_s("%d", &x);
			PRINTI(x);
			scanf_s("%d", &y);
			PRINTI(y);
			scanf_s("%d", &z);
			PRINTI(z);
			left = SQR(y);
			left = SUM(x, left);
			right = SQR(x);
			right = SUM(z, right);
			result = MAX(left, right);
			PRINTR(result);
			puts("Повторити? (y/n) "); ch = _getch();
#endif 
		}
	} while (ch == 'y' || ch == 'Y');
}