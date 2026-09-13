#include<stdio.h>
int main (){
    float maths = 20;
    float evs = 40;
    float science = 30;
    float hindi = 30;
    float total = maths + evs + science + hindi;
    float percentage = (total/160)*100;
    printf(" %f",percentage);
    return 0;
}