#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x = 0, sum = 1, pred = 0, res = 0, fact = 1, tec = 0;
	int n = 1;
	printf("Введите x: ");
	scanf_s("%f", &x);
	do
	{
		pred = tec;
		fact *= n;
		tec = (float)pow(x, n) / fact;
		sum += tec;
		n++;
	} while (fabs(tec - pred) < 0.001);
	printf("%f", sum);
	return 0;
}
