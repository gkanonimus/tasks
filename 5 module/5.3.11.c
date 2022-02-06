/* Program. The standard input stream is a sequence of non-zero integers followed by 0. Print all negative numbers in this sequence first, and then all positive ones (in any order) */

#include <stdio.h>
void func();

int main()
{
    func();
}

void func()
{
    int number;
    scanf("%d", &number);
    if (number != 0)
    {
        if (number < 0)
        {
            printf("\n%d\n", number);
            func(number);
        }
        else
        {
            func(number);
            printf("\n%d\n", number);
        }
    }
    else
    {
        printf("\n0\n");
        return;
    }
}