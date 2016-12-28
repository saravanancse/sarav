#include <stdio.h>
#include <conio.h>
int main()
{

    char n;
    printf("enter the value of n\n");
    scanf("%c",&n);
    if(n=='a'||n=='i'||n=='e'||n=='o'||n=='u')
    {
        printf("it is vowel");

    }
    else{
        printf("it is not vowel");
    }
    return 0;
}
