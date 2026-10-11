#include <stdio.h>
int main()
{
    int a;
    printf("sum of 1 to ");
    scanf("%d", &a);

    int sum = 0;
    for(int i = 1; i<= a; i++){
      sum = sum+i;
    }
    printf("sum is %d", sum);

    return 0;
}