#include <stdio.h>
void main() {
  int num1,num2,opt;
  scanf("%d%d%d",&num1, &num2, &opt);
    switch(opt) {
      case 1:
        printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
        break;
      case 2:
        printf("The Substraction of %d and %d is: %d\n",num1,num2,num1-num2);
        break;
      case 3:
        printf("The Multiplication of %d and %d is: %d\n",num1,num2,num1*num2);
        break;  
      case 4:
        if(num2==0) {
          printf("The second integer is zero. Can't do division \n");
        } else {
          printf("The Division of %d and %d is : %d\n",num1,num2,num1/num2);
        }  
        break;
        case 5: 
        break; 
      default:
        printf("Input correct option\n");
        break; 
    }
}
