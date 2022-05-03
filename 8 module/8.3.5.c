/* Describe a function that, given the plane array, calculates:
a) the number of circles on the plane;
b) the total perimeter of all figures;
c) the largest area of one figure */

#include <stdio.h>
#include <math.h>
#define N 50
#define PI 3.14

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
void  fill(struct shape *);
int   calcA(struct shape *);
float calcB(struct shape *);
float calcC(struct shape *);

int main()
{
    struct shape plane[N];
    fill(plane);
    printf("%d circles\n%.2f total perimeter\n%.2f the largest area",
           calcA(plane), calcB(plane), calcC(plane));
}

void fill(struct shape *plane)
{
    for (int i = 0; i < N; i++)
    {
        if (i <= 9)
        {
            plane[i].kind      = circle;
            plane[i].info.ci.r = i + 1;
            
        }
        if (i > 9 && i < 30)
        {
            plane[i].kind      = triangle;
            plane[i].info.ti.a = i - 9;
            plane[i].info.ti.b = 2 * (i - 9);
            plane[i].info.ti.c = 2 * (i - 9);
        }
        if (i > 29)
        {
            plane[i].kind      = rectangle;
            plane[i].info.ri.w = i - 29;
            plane[i].info.ri.h = i - 29;
        }
    }
}

int calcA(struct shape *plane)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (plane[i].kind == circle)
        {
            count++;
        }
    }
    return count;
}

float calcB(struct shape *plane)
{
    float per = 0.0;
    for (int i = 0; i < 10; i++)
    {
        if (plane[i].kind == circle)
        {
            per += 2 * PI * plane[i].info.ci.r;
            
        }
        if (plane[i].kind == triangle)
        {
            per += (plane[i].info.ti.a + plane[i].info.ti.b + plane[i].info.ti.c);
        }
        if (plane[i].kind == rectangle)
        {
            per += 2 * (plane[i].info.ri.w + plane[i].info.ri.h);
        }
    }
    return per;
}

float calcC(struct shape *plane)
{
    float area = 0.0;
    
    for (int i = 0; i < 50; i++)
    {
        float trarea_calc = PI * plane[i].info.ci.r * plane[i].info.ci.r;
        float hp = (plane[i].info.ti.a + plane[i].info.ti.b + plane[i].info.ti.c) / 2;
        float heron_area = (sqrt(hp * (hp - plane[i].info.ti.a) * (hp - plane[i].info.ti.b) *
            (hp - plane[i].info.ti.c)));
        float rearea = plane[i].info.ri.w * plane[i].info.ri.h;
        if (plane[i].kind == circle)
        {
            if (area < trarea_calc)
            {
                area = trarea_calc;
            }
            
        }
        if (plane[i].kind == triangle)
        {
            if (heron_area > area)
            {
                area = heron_area;
            }
        }
        if (plane[i].kind == rectangle)
        {
            if (rearea > area)
            {
                area = rearea;
            }
        }
    }
    return area;
}