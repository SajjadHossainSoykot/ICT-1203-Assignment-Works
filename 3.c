#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1>0){
        printf("%d is a positive number\n", num1);
    }
    else if(num1<0){
        printf("%d is a negative number\n", num1);
    }
    else{
        printf("%d is zero\n", num1);
    }

    return 0;
}