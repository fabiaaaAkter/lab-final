#include <stdio.h>

int main()
{
	int arr1[5], arr2[5], num, l = 0, m = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			arr1[l] = num;
			l++;
		}
		else
		{
			arr2[m] = num;
			m++;
		}
	}
	printf("Even Array\n");

	for (int i = 0; i < l; i++) printf("%d ", arr1[i]);
	printf("\n");
	Printf("Odd Array\n")
	for (int i = 0; i < m; i++) printf("%d ", arr2[i]);
}
