#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a == b == c){printf("This is an equilateral triangle\n");}
    else if(a == b || a == c || b == c){printf("This is an isosceles triangle.\n");}
    else {printf("This is a scalene triangle.\n");}
    return 0; 

}