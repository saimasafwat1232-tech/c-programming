#include <stdio.h>
void namasthe();
void bnjour();
int main(){
    printf("Enter F for Frence and I for India: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'F'){
        bnjour();
    }
   else {
    namasthe();
   }
   return 0;
}
void namasthe()
{
    printf("Namasthe");
}
void bnjour()
{
    printf("Bnjour");
}