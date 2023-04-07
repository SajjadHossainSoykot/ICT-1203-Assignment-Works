#include <stdio.h>
void main ()
{
      int choice,r,l,w,b,h;
      float area;
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 scanf("%d",&r);
                 area=3.14*r*r;
                 break;
            case 2:
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  break;
            case 3:
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  break;
          }
          printf("The area is : %f\n",area);
}
