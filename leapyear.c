#include<stdio.h>
int main(){
    int year;
    printf("enter the year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("Enter the year is leap year");
    }
    else{
        printf("Enter the year is not leap year");
    }
    return 0;
}