#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Pleace enter a number: ");
    scanf("%d", &num1);
    printf("Pleace enter another number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);

    return 0;

}