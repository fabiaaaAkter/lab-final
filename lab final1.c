#include <stdio.h>
int main()
{
    int num1, num2,sum, sub, mult,div;



    printf("Input any two numbers separated  : ");
    scanf("%d %d", &num1, &num2);


    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;



    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mult);
    printf("The quotient of the given numbers : %d\n", div);

    return 0;
}
