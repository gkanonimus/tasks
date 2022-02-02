/* Print the first n Fibonacci numbers */

#include <stdio.h>

int main()
{
    int number_1, number_2, number_3, n;
    number_1 = 0;
    number_2 = 1;
    number_3 = 1;
    n = 15;
    
    printf("\n0\n1");
    while(n>0)
    {
        number_1 = number_2;
        number_2 = number_3;
        number_3 = number_1 + number_2;
        n--;
        printf("\n%d", number_2);
    }
    printf("\n");
}