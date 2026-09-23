#include <stdio.h>
int main()
{
    int m, n = 5;
    int i;

    m = 0;
    for(i = 5; i <= 15; i = i +1){
        m = n * i;
        printf("%d * %d = %d\n", n, i, m);
    }
    return 0;
} 