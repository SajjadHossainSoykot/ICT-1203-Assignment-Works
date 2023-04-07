#include <stdio.h>
void main()
{
   int a;
   scanf("%d",&a);
   if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
    printf("Month have 31 days\n");
   }
   else if (a==2){
    printf("Month have 28 days\n");
   }
   else printf("Month have 30 days\n");
}
