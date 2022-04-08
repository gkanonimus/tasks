#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int main()
{
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
    
    struct circle plane[] = 
    {5, 1, 2,
     2, 0, 0,
     2, 1, 2,
     1, -10, -10};
    
    //check A
    bool checkA = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (plane[i].center.x == plane[j].center.x && plane[i].center.y == plane[j].center.y)
            {
                checkA = true;
                break;
            }
        }
    }
    printf("Check A %d\n", checkA);
    
    //check B and C
    bool checkB = false;
    bool checkC = false;
    float l;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            l = pow((plane[j].center.x - plane[i].center.x), 2) + pow((plane[j].center.y - plane[j].center.y), 2);
            if (abs(plane[i].radius - plane[j].radius) > l)
            {
                checkB = true;
                break;
            }
            if (plane[i].radius + plane[j].radius < l)
            {
                checkC = true;
                break;
            }
        }
    }
    printf("Check B %d\nCheck C %d\n", checkB, checkC);
}