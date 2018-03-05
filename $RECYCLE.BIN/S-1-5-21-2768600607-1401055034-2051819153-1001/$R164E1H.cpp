#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int sq=sqrt(n*1.0)+2;
    bool arr[n+1];
    memset(arr,true,sizeof(arr));
    for(int i=4; i<=n; i+=2)
    {
        arr[i]=false;
    }
    /*for(int i=3; i<=sq; i+=2)
    {
        for(int j=i;i*j<=n; j++)
        {
            if(arr[i])
            {
                arr[i*j]=false;
            }
        }
    }*/
    for(int i=3; i<=sq; i+=2)
    {
        if(arr[i])
        {
            for(int j=i*i; j<=n; j+=i*2)
            {
                arr[j]=false;
            }
        }
    }
    for(int i=2; i<n; i++)
    {
        if(arr[i])
        {
            printf("%d,",i);
        }
    }
    return 0;
}
