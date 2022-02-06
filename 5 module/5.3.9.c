/* Let n be a non-negative integer. Recursively describe a function of parameter n that finds:
a) the sum of the digits of that number
b) the maximum digit in the decimal notation of that number
c) the highest (leftmost) digit in the decimal representation of this number */

#include <stdio.h>
int sum(int number);
int max(int number);
int highest(int number);

int main()
{
    int number;
    scanf("%d", &number);
    printf("\n%d\n%d\n%d\n", sum(number), max(number), highest(number));
}

int sum(int number)
{
    if(number < 10)
    {
        return number;
    }
    else
    {
        return number % 10 + sum(number / 10);
    }
}

int max(int number)
{
    int last_digit = number % 10;
    int rest = number / 10;
    
    if (rest == 0) 
    {
        return last_digit;
    }
    
    int current_max = max(rest);
    
    if (current_max > last_digit)
    {
        return current_max;
    }
    return last_digit;
}

int highest(int number)
{
    if(number < 10)
    {
        return number;
    }
    else
    {
        return highest(number / 10);
    }
}