#include<stdio.h>
int main()
{
    int i,s=0,n;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)

            s=s+i;
    }
    printf("The sum of Even number is %d",s);

    return 0;
}
