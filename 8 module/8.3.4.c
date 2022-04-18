/* Describe a structure for presenting information about a person: last name (not
more than 30 characters), name (no more than 30 characters), age. Describe a function that
for a given array of the described structures determines:
a) the age of the oldest person;
b) the number of people with a given name (the name is also a parameter
functions);
c) the number of people who have namesakes;
d) the name of the person whose age is closest to the average age of all people from
array (we can assume that there is only one such person) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <>
#define N 5

struct data
{
    char last[30];
    char name[30];
    int  age;
};
char input[30];
char* out = (char*)malloc(30 * sizeof(char));
int  checkA(struct data *);
int  checkB(struct data *, char input[30]);
int  checkC(struct data *);
char checkD(struct data *);

int main()
{
    struct data base[N] =
    {"Kiryanov", "Ilya", 22,
     "Gavrilin", "Anton", 24,
     "Kiryanov", "Viktor", 28,
     "Gavrilin", "Artem", 17,
     "Perepelkin", "Nikita", 20};
     
     printf("Enter a name: ");
     scanf("%s", input);
    printf("Check A %d\nCheck B %d\nCheck C %d\nCheck D %s\n",
           checkA(base), checkB(base, input), checkC(base), checkD(base));

}

int checkA(struct data *base)
{
    int max = base[0].age;
    for (int i = 1; i < N; i++)
    {
        if (base[i].age > max)
        {
            max = base[i].age;
        }
    }
    return max;
}

int checkB(struct data *base, char input[30])
{
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (strcmp(base[i].name, input) == 0)
        {
            counter++;
        }
    }
    return counter;
}

int checkC(struct data *base)
{
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (strcmp(base[i].last, base[j].last) == 0)
            {
                counter++;
            }
        }
    }
    return counter;
}

char checkD(struct data *base)
{
    float mid = 0;
    for (int i = 0; i < N; i++)
    {
        mid += base[i].age;
    }
    mid /= N;
    
    int diff = abs((mid - base[0].age));
    strcpy(out, base[0].name);
    for (int i = 1; i < N; i++)
    {
        if (abs((mid - base[i].age)) > diff)
        {
            diff = abs((mid - base[i].age));
            strcpy(out, base[i].name);
        }
    }
    return out;
}