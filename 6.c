#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1>0){
        printf("The value of n = 1\n");
    }
    else if(num1<0){
        printf("The value of n = -1\n");
    }
    else{
        printf("The value of n = 0\n");
    }
    return 0;
}