#include<stdio.h>
int main(){
    int num1;
    scanf("%d", &num1);
    if(num1>=18){
        printf("Congratulations! You are eligible for casting your vote\n");
    }
    else printf("Sorry! You are ineligible for casting your vote\n");
    return 0;
}