/* Files a.txt and b.txt contain sequences of integers
(possibly empty), with the numbers in each file in non-decreasing order.
Write a program that creates a c.txt file containing all the numbers from both input files, also sorted in non-decreasing order. It is forbidden to use
arrays and dynamic memory */

#include <stdio.h>
#include <stdlib.h>

int left, right;
void print();
FILE *file;
FILE *file2;
FILE *file3;

int main()
{
    file  = fopen("a.txt", "r");
    file2 = fopen("b.txt", "r");
    file3 = fopen("c.txt", "w");
    
    fscanf(file, "%d", &left);
    fscanf(file2, "%d", &right);
    print();
    if (left >= right)
    {
        fprintf(file3, "%d", left);
    }
    else
    {
        fprintf(file3, "%d", right);
    }
}

void print()
{
    if (left >= right)
    {
        fprintf(file3, "%d ", right);
        if (fscanf(file2, "%d", &right) != EOF)
        {
            print();
        }
        return;
    }
    else
    {
        fprintf(file3, "%d ", left);
        if (fscanf(file, "%d", &left) != EOF)
        {
            print();
        }
        return;
    }
}