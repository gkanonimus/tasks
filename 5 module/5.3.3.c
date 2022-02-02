/* Let n be a non-negative integer. Describe the function of the parameter n,
which finds:
a) the sum of the digits of this number
b) the maximum digit in the decimal notation of that number
c) the number of odd digits in the decimal notation of that number */

#include <stdio.h>
int sum(int number);
int max(int number);
int odd(int number);

int main()
{
    int number, oper;
    
    scanf("%d %d", &number, &oper);
    
    switch(oper)
    {
        case 1:
        {
            printf("\n%d\n", sum(number));
            break;
        }
        case 2:
        {
            printf("\n%d\n", max(number));
            break;
        }
        case 3:
        {
            printf("\n%d\n", odd(number));
            break;
        }
        default:
        {
            printf("Error");
            break;
        }
    }

}

int sum(int number)
{
    int sum = 0;
    while(number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int max(int number)
{
    int max = number % 10;
    while(number >= 10)
    {
        number /= 10;
        max = ((number % 10) <= max ? max : number % 10);
    }
    return max;
}

int odd(int number)
{
    int odd = 0;
    while(number > 0)
    {
        if((number % 2) == 1)
        {
            odd++;
        }
        number /= 10;
    }
    return odd;
}