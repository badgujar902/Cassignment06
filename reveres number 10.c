#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number\n");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;


         n=n%10;
        printf("Reverse number %d is %d",n,r);

    }
    return 0;
}
