#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

// Function to compute the area of the triangle using Heron's formula
double compute_area(triangle t)
{
    double s = (t.a + t.b + t.c) / 2.0; // semi-perimeter
    return sqrt(s * (s - t.a) * (s - t.b) * (s - t.c));
}

// Function to compare two triangles based on their areas
int compare(const void *a, const void *b)
{
    triangle *t1 = (triangle *)a;
    triangle *t2 = (triangle *)b;
    double area1 = compute_area(*t1);
    double area2 = compute_area(*t2);

    return area1 < area2 ? -1 : 1; // If area1 < area2, return -1 (for sorting in ascending order)
}

void sort_by_area(triangle *tr, int n)
{
    qsort(tr, n, sizeof(triangle), compare);
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    free(tr);
    return 0;
}
