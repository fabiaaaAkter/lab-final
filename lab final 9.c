#include <stdio.h>
#include <math.h>

int main()
{
	int n, a = 1, b = 0, s;
	int fact = 1, prime, choice, num;
	int n, reversed = 0, remainder, original;
	int flag = 0;
	printf("Enter 1 to Know Number Is prime\n");
	printf("Enter 2 to know Number is Fibonacci Series\n");
	printf("Enter 3 to Palindrome\n");
	printf("Enter A Number to Choice: \n");
	scanf("%d", &choice);
	switch (choice)
	{

		case 1:
			scanf("%d", &prime);
			if (prime == 1 || prime == 2)
			{
				printf("Number is Not Prime");
				break;
			}

			for (int i = 3; i <= sqrt(prime); i++)
			{
				if (prime % i == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0) printf("Number Is Prime");
			else printf("Number is Not Prime");
			break;
		case 2:

			scanf("%d", &n);
			printf("Enter a Number to Know Fibonakki Series");
			for (int i = 0; i < n; i++)
			{
				printf("%d ", b);
				s = a + b;
				a = b;
				b = s;
			}
			break;
		case 3:

			printf("Enter a Number To check Palindrome Or Not ");
			scanf("%d", &n);
			original = n;

			while (n != 0)
			{
				remainder = n % 10;
				reversed = reversed *10 + remainder;
				n /= 10;
			}

			if (original == reversed)
				printf("%d is a palindrome.", original);
			else
				printf("%d is not a palindrome.", original);

			break;
		default:
			printf("Invalid Number");
	}
}
