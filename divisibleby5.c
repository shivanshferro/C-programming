#include<Stdio.h>
int main(){
    int x;
    printf("Enter The Number : ");
    scanf("%d",&x);
    if(x%5==0){
        printf("Enter number is divisible By 5");
    }
    else{
        printf("Enter Number Is Not Divisible By 5");
    }
    return 0;
}