#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        if(x%15!=0){
            printf("The number is  divisible by 5 or 3 but not by 15 ");
        }
        else{
            printf("the number is  divisible by 5 and 3 but by 15 also");
        }
    }
    else{
        printf("the number is not divisble by 5 and 3");
    }
    return 0;
}