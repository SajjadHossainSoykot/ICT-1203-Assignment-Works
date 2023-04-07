#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(b>a){printf("You can booked your profit amount : %d\n", b-a);}
    else if(b<a){printf("You can booked your loss amount : %d\n", a-b);}
    else {printf("There is no profit or loss\n");}
    return 0; 
}