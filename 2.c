#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1%2==0){
        printf("%d is an even integer\n", num1);
    }
    else if(num1%2!=0){
        printf("%d is an odd integer\n", num1);
    }

    return 0;
}