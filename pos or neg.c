#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("it is postive");
    }
    else if(n<0)
    {
        printf("it is negative ");
    }
    else{
        printf("it is zero");
    }
    return 0;
}
