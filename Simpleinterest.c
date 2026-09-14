#include<stdio.h>
int main(){
    int principal, rate ,time;
    printf("enter the principal : ");
    scanf("%d",&principal);
    printf("enter the rate : ");
    scanf("%d",&rate);
    printf("enter the time : ");
    scanf("%d",&time);
    float simpleinterest = (principal * rate * time)/100;
    printf("%f",simpleinterest);

    return 0;
}