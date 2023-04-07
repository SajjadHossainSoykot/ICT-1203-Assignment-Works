#include<stdio.h>
int main(){
    int m, p, c, tall, tmp;
    printf("Input the marks obtained in Physics : ");
    scanf("%d", &p);
    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &c);
    printf("Input the marks obtained in Mathemetics : ");
    scanf("%d", &m);
    tall = m + p + c;
    tmp = p + m;
    printf("Total marks of Maths, Physics and Chemistry : %d\n", tall);
    printf("Total marks of Maths and Physics: %d\n", tmp);
    if(m>=65 && p>=55 && c>=50 && tall>=190 && tmp>=140){
        printf("The candidate is eligible for admission.\n");
    }
    else printf("The candidate is not eligible for admission.\n");
    return 0;
}