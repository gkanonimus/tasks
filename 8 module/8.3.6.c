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
void print_shape(struct shape *pr);


int main()
{
    struct shape plane[N];
    fill(plane);
}

void fill(struct shape *plane)
{
    struct shape pr;
    for (int i = 0; i < 50; i++)
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
        pr = plane[i];
        print_shape(&pr);
    }
}

void print_shape(struct shape *pr)
{
    if (pr->kind == circle)
    {
        printf("Circle %.2f\n", pr->info.ci.r);
    }
    if (pr->kind == triangle)
    {
        printf("Triangle %.2f %.2f %.2f\n", pr->info.ti.a, pr->info.ti.b, pr->info.ti.c);
    }
    if (pr->kind == rectangle)
    {
        printf("Rectangle %.2f %.2f\n", pr->info.ri.w, pr->info.ri.h);
    }
}