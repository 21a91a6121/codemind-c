#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i+=2)
    {
        sum = sum + arr[i];
    }
    printf("%d",sum);
    
}