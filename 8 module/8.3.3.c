/* Describe a structural type for representing a date (day, month, year). Using
this type, describe a function that takes an array of dates as input and arranges it in non-descending order */

#include <stdio.h>
#define N 9
 
struct date
{ 
    int day;
    int month;
    int year;
};

void print(struct date *);
void sort(struct date *);

int main()
{
    struct date base[N] =
    {12, 1, 2003,
     31, 10, 1999,
     5, 11, 1998,
     4, 1, 2003,
     25, 11, 1998,
     12, 9, 2003,
     5, 7, 1998,
     4, 5, 1998,
     6, 9, 1998};
     print(base);
     sort(base);
     print(base);
}

void print(struct date *data)
{
    for (int i = 0; i < N; i++, data++)
    {
        printf("%2d  of %2d %4d\n",
                data->day, data->month, data->year);
    }
    printf("\n");
}

void sort(struct date *info)
{
    struct date temp;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (info[i].day > info[j].day)
            {
                temp    = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if ((info[i].month > info[j].month) 
            || (info[i].month == info[j].month && info[i].day > info[j].day))
            {
                temp    = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if ((info[i].year > info[j].year) 
            || (info[i].year == info[j].year && info[i].month > info[j].month))
            {
                temp    = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }
}