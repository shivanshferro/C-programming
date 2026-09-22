#include<stdio.h>
int main (){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf(" An number Is an three digit number  %d", x);

    }
    else{
        printf("An number Is an Not Three Digit Number  %d", x);
    }
    return 0;
}