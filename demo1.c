#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the number : ");
    scanf("%d",&y);
    printf("Enter the number : ");
    scanf("%d",&z);
    if(x>y){
        if(x>z){
            printf("x is greater than  all of three them ");
        }
    }
    if(y>x){
        if(y>z){
            printf("y is greater than of all of three them");
        }
    }
    if(z>x){
        if(z>y){
            printf("z is greater than all of three them");

        }
    }
    return 0;
}