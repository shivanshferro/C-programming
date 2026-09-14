#include<stdio.h>
int main (){
    printf("Enter the radius : ");
    int radius;
    scanf("%d",&radius);
    float area = 3.14 * radius * radius;
    printf("%f",area);

    return 0;
}