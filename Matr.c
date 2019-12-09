#include <stdio.h>
#define SIZE 10

void generate(int(*m)[SIZE])
{
	for (int i = 0; i < SIZE;i++)
	  for (int j = 0; j < SIZE; j++)
		m[i][j] = (i == j) ? 1 : 0;
}
void print(int(*m)[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			printf("%1d ", m[i][j]);
		putchar('\n');
	}
}
void clear(int *m, int N)
{
	for (int i = 0; i < N; i++)
		m[i] = 0;
}
int main()
{
	int matr[SIZE][SIZE] = { { 0 } };
	print(matr);
	puts("");
	generate(matr);
	puts("");
	clear((int*)matr,SIZE*SIZE);
	puts("");
	print(matr);
	return 0;
}