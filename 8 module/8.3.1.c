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
    } date1;
    strcpy(date1.month, "November"); 
    date1.day  = 16;
    date1.year = 1999;
    printf("%s ", date1.month);
    printf("%d, ", date1.day);
    printf("%d\n", date1.year);
    
    struct address
    {
        char country[15];
        char city[20];
        char street[30];
        int  house;
        int  apartment;
    } add1;
    strcpy(add1.country, "Russia");
    strcpy(add1.city, "Moscow");
    strcpy(add1.street, "Ilyinka");
    add1.house     = 3;
    add1.apartment = 34;
    printf("%s, ", add1.country);
    printf("%s, ", add1.city);
    printf("%s, ", add1.street);
    printf("house %d, ", add1.house);
    printf("apt. %d\n", add1.apartment);
    
    struct triangle
    {
        float first_side;
        float second_side;
        float angle;
    } triangle1;
    triangle1.first_side  = 5;
    triangle1.second_side = 6.7;
    triangle1.angle = 35;
    printf("%2.2f, ", triangle1.first_side);
    printf("%2.2f, ", triangle1.second_side);
    printf("%2.2f°\n", triangle1.angle);
}