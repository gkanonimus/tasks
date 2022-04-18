/* Describe the given concept in the form of a structure. Describe also the variable of this
type and assign it the specified value:
a) date (day, month, year); November 16, 1999
b) address (country, city, street, house, apartment); Russia, Moscow, Ilyinka, house 3,
apt. 34
c) a triangle (two sides and an angle between them); 5, 6.7, 35° */

#include <stdio.h>
#include <string.h>

int main()
{
    struct date
    {
        char month[10];
        int day;
        int year;
    };
    struct date date1 = {"November", 16, 1999};
    printf("%s %d, %d\n", date1.month, date1.day, date1.year);
    
    struct address
    {
        char country[15];
        char city[20];
        char street[30];
        int  house;
        int  apartment;
    };
    struct address add1 = {"Russia", "Moscow", "Ilyinka", 3, 34};
    printf("%s, %s, %s, house %d, apt. %d\n", add1.country, add1.city, 
            add1.street, add1.house, add1.apartment);
    
    struct triangle
    {
        float first_side;
        float second_side;
        float angle;
    };
    struct triangle triangle1 = {5, 6.7, 35};
    printf("%.0f, %.1f, %.0f\n", triangle1.first_side, triangle1.second_side, 
           triangle1.angle);
}