#include<stdio.h>
int main (){
    int ram,shyam,ajay;
    printf("Enter the age : ");
    scanf("%d",&ram);
    printf("Enter the age  : ");
    scanf("%d",&shyam);
    printf("Enter the age : ");
    scanf("%d",&ajay);
    if(ram<shyam){
        if(ram<ajay){
            printf("ram is youngest all of them");
        }
        else{
            printf("ajay is youngest all of them");

        }
    }
    else{
        if(shyam<ram){
            printf("shyam is youngest all of them");
            
        }
        else{
            printf("ajay is youngest all of them");
        }
    }
    return 0;
}