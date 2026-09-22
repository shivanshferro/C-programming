#include<stdio.h>
int main (){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf(" An Number Is an three digit number ");

    }
    else{
        printf("An Number Is an Not Three Digit Number");
    }
    return 0;
}