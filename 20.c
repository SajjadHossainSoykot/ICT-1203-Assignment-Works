#include <stdio.h>
void main()
{
   char ch;

   printf("Input the grade: ");
   scanf("%c",&ch);
   switch(ch)
   {
	 case 'A':
	       printf("Average\n");
	       break;
 
	 case 'F':
	       printf("Fail\n");
	       break;
	case 'G':
	       printf("Good\n");
	       break;
	case 'V':
	       printf("Very Good\n");
	       break;
	case 'E':
	       printf("Excellent\n");
	       break;
	default:
	       printf("invalid grade \nPlease try again ....\n");
	       break;
      }
}
