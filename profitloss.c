#include<stdio.h>
int main (){
    int costprice;
    printf("Enter The Amount : ");
    scanf("%d",&costprice);
    int sellingprice;
    printf("Enter The Amount : ");
    scanf("%d",&sellingprice);
    if(costprice<sellingprice){
        printf("GOT PROFIT");
    }
    if(costprice>sellingprice){
        printf("GOT LOSS");
    }
    if(costprice==sellingprice){
        printf(" nothing");
    }
    return 0;
}