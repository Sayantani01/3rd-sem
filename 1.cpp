//add each element in array
#include<stdio.h>
int main()
{
    int sum=0;
    int n;
    int arr[n];
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}