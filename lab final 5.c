#include <stdio.h>
int main()
{
	int mark;
	printf("Enter marks (0-100): ");
	scanf("%d", &mark);
	switch (mark)
	{
		case 80 ... 100:
			printf("Grade: A+");
			break;
		case 75 ... 79:
			printf("Grade: A");
			break;
		case 70 ... 74:
			printf("Grade: A-");
			break;
		case 65 ... 69:
			printf("Grade: B+");
			break;
		case 60 ... 64:
			printf("Grade: B");
			break;
		case 55 ... 59:
			printf("Grade: B-");
			break;
		case 50 ... 54:

			printf("Grade: C+");
			break;
		case 45 ... 49:
			printf("Grade: C");
			break;
		case 40 ... 44:
			printf("Grade: D");
			break;
		default:
			printf("Grade: F");
			break;
	}
	return 0;
}
