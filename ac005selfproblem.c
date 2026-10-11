#include <stdio.h>
int main(){
    printf("Enter the number:");
    int n;
    scanf("%d", &n);
    
    int i = 0;
    while (i <= n)
    {
       printf("%d\n", i);
       i++;
    }
    return 0;
}