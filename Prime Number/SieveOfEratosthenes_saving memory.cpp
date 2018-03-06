#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int sq=sqrt(n*1.0)+2;
    bool arr[n/2];
    memset(arr,true,sizeof(arr));
    for(int i=3; i<=sq; i+=2)
    {
        if(arr[i>>1])
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                arr[j>>1]=false;
            }
        }
    }
    printf("2 ");
    for(int i=3; i<=n; i+=2)
    {
        if(arr[i>>1])
        {
            printf("%d ",i);
        }
    }
    return 0;
}
