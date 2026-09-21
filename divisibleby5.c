#include<Stdio.h>
int main(){
    int x;
    printf("Enter The Number : ");
    scanf("%d",&x);
    if(x%5==0){
        printf("Enter number is divisible by 5");
    }
    else{
        printf("Enter Number Is Not Divisible by 5 ");
    }
    return 0;
}