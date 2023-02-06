#include<stdio.h>
int main()
{
     int count=0,n;
    printf("Enter a digit\n");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The total digits in number is %d",count);
    return 0;
}
