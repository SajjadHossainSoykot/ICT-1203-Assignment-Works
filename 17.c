#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')  
    {
        printf("The alphabet is a vowel\n");
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')  
    {
        printf("The alphabet is a vowel\n");
    }
    else {
        printf("The alphabet is a consonant\n");
    }
    return 0;
}