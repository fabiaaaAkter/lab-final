#include <stdio.h>

int main( )
{
	float n1, n2, sum,sub;
	printf("Enter first number: ");

	scanf("%f", &n1);

    printf("Enter second number: ");

    scanf("%f", &n2);

    sum=n1+n2;
    sub=n1-n2;
    printf("Sum of two numbers= %f\n", sum);
    printf("Sub of two numbers= %f", sub);


    return 0;

}

