#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5

void process(double *arr, double(*f)(double))
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = f(arr[i]);
}
void print(double *arr)
{
	printf("[");
	for (int i = 0; i < SIZE; i++)
		printf("%lf ", arr[i]);
	printf("]\n");
}
int main()
{
	double data[SIZE] = { 1.0, 2.0, -1.0, -2.0, 0.0 };
	print(data);
	process(data,cos);
	print(data);

	puts("");
	return 0;
}