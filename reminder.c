// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the number : ");
//     scanf("%d",&a);
//     printf("enter the number : ");
//     scanf("%d",&b);
//     int C;
//     C = a / b;
//     printf("%d",C);
//     printf("\n");
//     int z;
//     z = a -(C*b);
//     printf("the reminder is : %d",z);
//     return 0;
// }
#include<stdio.h>
int main(){
    int a,b,reminder;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("enter the number : ");
    scanf("%d",&b);
    reminder = a % b;
    printf("the reminder %d",reminder);
    return 0;
}