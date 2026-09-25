#include <stdio.h>
int main()
{
    int x, y; 
     printf("enter the number : ");
    scanf("%d", &x);
    printf("enter the number : ");
    scanf("%d", &y);
    if (y == 0 && x == 0)
    {
        printf("lies on origin ");
    }
    else if (y != 0 && x == 0)
    {
        printf("lies on y axis");
    }
    else if (x != 0 && y == 0)
    {
        printf("lies on x axis ");
    }
    else
         printf("Lies in the plane (not on any axis)");
    return 0;
}