/* Using the conditional operation “?:”, write an expression to evaluate:
a) the modulus of an integer x
b) the maximum of two integers
c) the maximum of three integers */

#include <stdio.h>

int main()
{
    int x, modul;
    x     = -72;
    modul = (x >= 0) ? x : -x;
    printf("\n%d\n", modul);
    
    int first_1, second_1, max_two;
    first_1      = 202;
    second_1     = 134;
    max_two      = (first_1 >= second_1) ? first_1 : second_1;
    printf("\n%d\n", max_two);
    
    int first_2, second_2, third_2, max_three;
    first_2   = 54;
    second_2  = 96;
    third_2   = 72;
    max_three = (first_2 >= second_2 && first_2 >= third_2) ? first_2 : ((second_2 >= first_2 && second_2 >= third_2) ? second_2 : third_2);
    printf("\n%d\n",max_three);
}