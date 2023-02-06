#include<stdio.h>
int main()
{
    int i,s,n,g;
    printf("Enter a number \n");
    scanf("%d",&n);

    for(i=1,s=0;i<=n;i++)
    {
        g=i*i*i;
        s=s+g;
    }
    printf("The sum of cube is %d",s);

    return 0;
}
