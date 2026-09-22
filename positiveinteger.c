#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    if(x%3==0 && x%5==0){
        printf("yes number divisble by both 5 and 3");
    }
    else{
        printf("no number divisble by both 5 and 3");
    }
    return 0;
}