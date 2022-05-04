/* The file contains a non-empty sequence of integers. Required:
a) find the largest of these numbers;
b) count the number of even numbers;
c) determine whether these numbers constitute an arithmetic progression;
d) determine whether these numbers constitute a geometric progression;
e) determine how many numbers in this sequence are exact
squares */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *file;
    file = fopen("input.txt", "r");
    int largest;
    int temp;
    int counter = 0;
    int prev;
    int diff;
    bool is_ar_prog = true;
    float mult;
    bool is_ge_prog = true;
    int square_count = 0;
    
    fscanf(file, "%d", &largest);
    prev = largest;
    int numb = 1;
    while(numb * numb < largest)
    {
        numb++;
    }
    if (largest - numb * numb == 0)
    {
        square_count++;
    }
    fscanf(file, "%d", &temp);
    if (temp > largest)
    {
        largest = temp;
    }
    if (!(temp % 2))
    {
        counter++;
    }
    numb = 1;
    while(numb * numb < temp)
    {
        numb++;
    }
    if (temp - numb * numb == 0)
    {
        square_count++;
    }
    diff = temp - prev;
    mult = temp / prev;
    prev = temp;
    
    
    while(fscanf(file, "%d", &temp) != EOF)
    {
        if (temp > largest)
        {
            largest = temp;
        }
        if (!(temp % 2))
        {
            counter++;
        }
        if (temp - prev != diff)
        {
            is_ar_prog = false;
        }
        if (temp / prev != mult)
        {
            is_ge_prog = false;
        }
        
        numb = 1;
        while(numb * numb < temp)
        {
            numb++;
        }
        if (temp - numb * numb == 0)
        {
            square_count++;
        }
        prev = temp;
    }
    printf("The largest number is %d\nNumber of even numbers is %d\n", largest, counter);
    printf("Check arithmteic progression is %d\n", is_ar_prog);
    printf("Check geometric progression is %d\n", is_ge_prog);
    printf("%d exact squares in file\n", square_count);
}