#include<stdio.h>
int main (){
    float x1,y1,x2,y2,x3,y3;
    printf("enter the number : ");
   scanf("%f",&x1);
    printf("enter the number : ");
     scanf("%f",&y1);
    printf("enter the number : ");
     scanf("%f",&x2);
    printf("enter the number : ");
     scanf("%f",&y2);
    printf("enter the number : ");
     scanf("%f",&x3);
    printf("enter the number : ");
     scanf("%f",&y3);
    float M1;
    M1 = (y2-y1)/(x2-x1);
    float M2;
    M2 = (y3-y2)/(x3-x2);
    if(M1=M2){
        printf("Point falls on straight line");
    }
    else{
        printf("ERROR");
    }
    return 0;
}