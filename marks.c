#include<stdio.h>
int main(){
    int x;
    printf("enter the percentage : ");
    scanf("%d",&x);
    if(x>91){
        printf("A grade");
    }
    else if(x>81){
        printf("B grade");
    }
    else{
        printf("Fail hn mittr");
    }
    return 0;
}