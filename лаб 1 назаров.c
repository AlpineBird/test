#include <stdio.h> // лабораторная 1, задание 15, уровень сложности А (одномерные массивы)
#include <locale.h>
#define N 100
#define U 100
void main()
{
	setlocale(LC_ALL, "RUS");
	int M[N], i, n, B[U], j = 0, sum = 0;
	printf("\nВведите количество элементов массива:\n");
	scanf("%d", &n);
	printf("\nВведите %d целых чисел через пробел:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &M[i]);

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			B[j] = M[i];
			j++;
			sum += M[i] * M[i];
		}

	}
	for (i = 0; i < j; i++)
		printf("\n%d", sum);
}