#include<stdio.h>
int main (){
    float marks1 = 100; //maths
    float marks2 = 80;  //evs
    float marks3 = 90;  //science
    float marks4 = 70;  //hindi
    float marks5 = 60;  //physical education
    float totalmarks = marks1 + marks2 + marks3 + marks4 +marks5;
    float percentage = (totalmarks/500)*100;
    printf("%f",percentage);
    return 0;

}