#include <stdio.h>
int string_length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}
int main()
{
    char countey[100];
    int length;
    while (1 == scanf("%s", countey)){
length = string_length(countey);
printf("length: %d\n", length);
    }
    return 0;
}