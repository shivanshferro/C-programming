#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int y;
    printf("Enter the number : ");
    scanf("%d", &y);
    int z;
    printf("Enter the number : ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("x is greater than both y and z");
    }
    if (y > x && y > z)
    {
        printf("y is greater than both x and z");
    }
    if (z > x && z > y)
    {
        printf("z is greater than both x and y");
    }
    return 0;
}