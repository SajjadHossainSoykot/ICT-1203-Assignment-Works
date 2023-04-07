#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,D;
    scanf("%d%d%d", &a, &b, &c);
    D = b*b-4*a*c;
    if(D==0){
    printf("Root are real and equal\n");
    }
    else if(D>0){
    printf("Root are real and distinct\n");
    }
    else if(D<0){
    printf("Root are imaginary\nNo solution\n");
    }
return 0;
}