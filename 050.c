#include <stdio.h>
int main()
{
    int ft_marks, st_markes,final_markes;
    double total_marks;

    ft_marks = 80;
    st_markes = 74;
    final_markes = 97;

    total_marks = ft_marks / 4.0 + st_markes / 4.0 + final_markes / 2.0;

    printf("%0.0lf\n", total_marks);
    return 0;
}