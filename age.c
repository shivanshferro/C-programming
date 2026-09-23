#include<stdio.h>
int main (){
    int ram,shyam,Ajay;
    printf("enter the age of Ram : ");
    scanf("%d",&ram);
    printf("enter the age of shyam : ");
    scanf("%d",&shyam);
    printf("enter the age of Ajay : ");
    scanf("%d",&Ajay);
    if(ram<shyam && ram<Ajay){
        printf("Ram is youngest of three of them");
    }
    if(shyam<ram && shyam<Ajay){
        printf("shyam is youngest of three of them");
    
    }
    if(Ajay<ram && Ajay<shyam){
        printf("Ajay is youngest of three of them");
    }
    return 0;
}