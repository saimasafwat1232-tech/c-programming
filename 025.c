#include <stdio.h>
int main()
{
    char ch ='f';
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("its a vowel\n", ch);
    }
    else{
        printf("its not a vawel\n", ch);
    }
    return 0;
}