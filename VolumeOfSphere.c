#include<stdio.h>
int main (){
    printf("Enter the radius of the sphere : ");
    int radius;
    scanf("%d",&radius);
    float volume;
    volume = 4*3.1415*radius*radius*radius/3;
    printf("%f",volume);

    return 0;
}