// Area of Circle using function pointer for different distance

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int dis;
    dis = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    return sqrtf(dis);
}

float Mdistance(int x1, int y1, int x2, int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
    ;
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distanceFunc)(int, int, int, int))
{
    float area = 0, pi = 3.14;
    float distance = (distanceFunc)(x1, y1, x2, y2);
    area = pi * distance * distance;
    return area;
}

int main()
{
    float (*fptr[])(int, int, int, int) = {Edistance, Mdistance};

    int x1, y1, x2, y2;
    printf("Enter the Value of x1 y1 x2 y2 (separated with space):\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    // printf("%d %d %d %d\n", x1, y1, x2, y2);

    printf("Euclidean distance %f\n", fptr[0](x1, y1, x2, y2));
    printf("Manhattan distance %f\n\n", fptr[1](x1, y1, x2, y2));

    printf("area of circle using Euclidean distance: %f\n", areaOfCircle(x1, y1, x2, y2, fptr[0]));
    printf("area of circle using Manhattan distance: %f\n\n", areaOfCircle(x1, y1, x2, y2, fptr[1]));

    return 0;
}
