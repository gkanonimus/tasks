/* Files a.txt and b.txt contain sequences of integers
(possibly empty), with the numbers in each file in non-decreasing order.
Write a program that creates a c.txt file containing all the numbers from both input files, also sorted in non-decreasing order. It is forbidden to use
arrays and dynamic memory */

#include <stdio.h>
#include <stdlib.h>

void print();
FILE *file;
FILE *file2;
FILE *file3;

int main()
{
    file  = fopen("a.txt", "r");
    file2 = fopen("b.txt", "r");
    file3 = fopen("c.txt", "w");
    print();
}

void print()
{
    int left, right;
    while (fscanf(file, "%d", &left) == 1)
    {
        while (fscanf(file2, "%d", &right) == 1 && left >= right)
        {
            fprintf(file3, "%d ", right);
        }
        fprintf(file3, "%d ", left);
        int shift = 0 , temp = right;
        while (temp != 0)
        {
            shift++;
            temp /= 10;
        }
        fseek(file2, -shift, SEEK_CUR);
    }
    while (fscanf(file2, "%d", &right) != EOF)
    {
        fprintf(file3, "%d ", right);
    }
    return;
}