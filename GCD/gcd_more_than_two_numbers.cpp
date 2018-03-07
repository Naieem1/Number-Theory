#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int gcd(int a,int b)
{
    if(a<b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }
    if(b==0)
    {
        return a;
    }
    gcd(b,a%b);
}
int main()
{
    int n;
    int arr[100];
    printf("Number of elements: ");
    scanf("%d",&n);
    printf("Enter the number: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=arr[0];
    for(int i=1;i<n;i++)
    {
        ans=gcd(arr[i],ans);
    }
    printf("%d\n",ans);
    return 0;
}
