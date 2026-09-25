#include <stdio.h>

int main()
{
    int testCases;
    int number;

    scanf("%d", &testCases);

    for (int i = 1; i <= testCases; i++)
    {
        scanf("%d", &number);

        for (int j = 10; j <= number; j++)
        {
            if (j % 11 != 0)
            {
                printf("%d\n", j);
            }
        }
    }
   return 0;
}