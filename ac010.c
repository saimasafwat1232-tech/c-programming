#include <stdio.h>
int main()
{
   
    for(int i = 0; i <= 10; i++){
        if(i == 7){
            continue;
        }
        printf("%d\n", i);
    }
    printf("Thank You");
    return 0;
}