#include<stdio.h>
int main(){
    int length,breadth;
    printf("enter the length : ");
    scanf("%d",&length);
    printf("enter the breadth : ");
    scanf("%d",&breadth);
    int perimeter;
    perimeter = 2*(length+breadth);
    int area;
    area = length * breadth ;
    if(area>perimeter){
        printf("Area is Greater than perimeter");
    }
    if(perimeter>area){
        printf("Perimeter is greater than area");
    }
    if(perimeter==area){
        printf("both are equal");
    }
    return 0;
}