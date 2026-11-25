#include <stdio.h>

int main()
{
	int a=50, b=20, choice;
	
	printf("Enter your choice (1-5):");
	scanf("%d", &choice);
	
	switch (choice)
	{
		case 1:
			printf("Addition=%d", a+b);
			break;
		case 2:
			printf("Subtraction=%d", a-b);
			break;
		case 3:
			printf("Multiplication=%d", a+b);
			break;
		case 4:
			printf("Division=%d", a+b);
			break;
		case 5:
			printf("Remainder=%d", a+b);
			break;
		default:
			printf("Invaid choice:");
	}
	return 0;
}
