#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d", &x, &y);
    printf("The coordinate point (%d,%d) lies in the ", x, y);
    if(x>0 && y>0){
        printf("First quadrant\n");}
    else if(x<0 && y>0){
        printf("Second quadrant\n"); }
    else if(x<0 && y<0){
        printf("Third quadrant\n");}
    else if(x>0 && y<0){
        printf("Fourth quadrant\n");}
    else if(x==0 && y==0){
        printf("Origin\n");}
    else if(x==0){printf("Y Axis\n");}
     else if(y==0){printf("X Axis\n");}
return 0;
}