/* Let an "integer" circle on the plane be described as follows:
struct point { int x; int y; };
struct circle { int radius; struct point center; };
Let there be an array containing information about circles on the plane:
struct circle plane[30];
Describe a function that defines:
a) are there at least two concentric circles among these circles;
b) whether there are at least two nested (not necessarily concentric) circles among these circles;
c) is there at least one “solitary” one among these circles, that is, without
common points with no other circle in the plane array */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#define N 4

struct point
{
    int x;
    int y;
};
struct circle
{
    int radius;
    struct point center;
};

bool checkA(struct circle *);
bool checkB(struct circle *);
bool checkC(struct circle *);

int main()
{
    struct circle plane[N] = 
    {5, 1, 2,
     2, 0, 0,
     2, 1, 2,
     1, -10, -10};
    
    printf("Check A %d\nCheck B %d\nCheck C %d\n", checkA(plane), 
            checkB(plane), checkC(plane));
}

bool checkA(struct circle *plane)
{
    bool check = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (plane[i].center.x == plane[j].center.x &&
            plane[i].center.y == plane[j].center.y)
            {
                check = true;
                break;
            }
        }
    }
    return check;
}

bool checkB(struct circle *plane)
{
    bool check = false;
    float l;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            l = pow((plane[j].center.x - plane[i].center.x), 2) +
            pow((plane[j].center.y - plane[j].center.y), 2);
            if (abs(plane[i].radius - plane[j].radius) > l)
            {
                check = true;
                break;
            }
        }
    }
    return check;
}

bool checkC(struct circle *plane)
{
    bool check = false;
    float l;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            l = pow((plane[j].center.x - plane[i].center.x), 2) +
            pow((plane[j].center.y - plane[j].center.y), 2);
            if (plane[i].radius + plane[j].radius < l)
            {
                check = true;
                break;
            }
        }
    }
    return check;
}