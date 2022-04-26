/* Using the descriptions from the previous problem, describe a function that fills the plane array */

#include <stdio.h>
#define N 50

enum { circle = 0, triangle = 1, rectangle = 2};
struct circle_info { double r; };
struct triangle_info { double a, b, c; };
struct rectangle_info { double w, h; };
struct shape 
{
    int kind;
    union 
    {
        struct circle_info ci;
        struct triangle_info ti;
        struct rectangle_info ri;
    } info;
};
void fill(struct shape *);

int main()
{
    struct shape plane[N];
    fill(plane);
}

void fill(struct shape *plane)
{
    for (int i = 0; i < 50; i++)
    {
        if (i <= 9)
        {
            plane[i].kind      = circle;
            plane[i].info.ci.r = i;
            printf("%d %.2f\n", plane[i].kind, plane[i].info.ci.r);
            
        }
        if (i > 9 && i < 30)
        {
            plane[i].kind      = triangle;
            plane[i].info.ti.a = i - 9;
            plane[i].info.ti.b = 2 * (i - 9);
            plane[i].info.ti.c = 2 * (i - 9);
            printf("%d %.2f %.2f %.2f\n", plane[i].kind, plane[i].info.ti.a, plane[i].info.ti.b, plane[i].info.ti.c);
        }
        if (i > 29)
        {
            plane[i].kind      = rectangle;
            plane[i].info.ri.w = i - 29;
            plane[i].info.ri.h = i - 29;
            printf("%d %.2f %.2f\n", plane[i].kind, plane[i].info.ri.w, plane[i].info.ri.h);
        }
    }
}