#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter The Number : ");
    scanf("%d", &x);
    printf("Enter the number : ");
    scanf("%d", &y);
    printf("Enter the number : ");
    scanf("%d", z);
    if ((x + y) > z && (y + z) > x && (x + z) > y)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Not valid triangle");
    }
    return 0;
}