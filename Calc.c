#include <stdio.h>


int main() 
{
	int arg1 = 0, arg2 = 0;
	char op = 0;


		printf("Enter an expression (a op b):\n");
		scanf("%d %c %d", &arg1, &op, &arg2);

		int result = 0;
		switch (op)
		{
		case '+':
			result = arg1 + arg2;
			break;
		case '-':
			result = arg1 - arg2;
			break;
		case '*':
			result = arg1 * arg2;
			break;
		case '/':
			if (arg2 == 0)
			{
				printf("Divided by zero!\n");
				return 2;
			}
			result = arg1 / arg2;
			break;
		default:
			printf("Unknown operation!\n");
			return 1;
		}
		printf("%d %c %d = %d\n", arg1, op, arg2, result);

	return 0;
}