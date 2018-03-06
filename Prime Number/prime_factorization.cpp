#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
#define size 100
bool arr[size/2];
int prime[size/2];
int factor[size];
void seive()
{
    int n=size;
    int x=0;
    int sq=sqrt(n*0.1)+2;
    memset(arr,true,sizeof(arr));
    for(int i=3;i<=sq;i+=2)
    {
        if(arr[i>>1])
        {
            for(int j=i*i;j<=n;j+=i+i)
            {
                arr[j>>1]=false;
            }
        }
    }
    prime[0]=2;
    for(int i=3;i<=n;i+=2)
    {
        if(arr[i>>1])
        {
           prime[++x]=i;
        }
    }
    /*for(int i=0;i<=x;i++)
    {
        printf("%d ",prime[i]);
    }
    cout<<endl;*/
}
void prime_factorization(int n)
{
    int l=n,a=0;
    int sq=sqrt(n*.1)+2;
    for(int i=0;prime[i]<=sq;i++)
    {
       if(n%prime[i]==0)
       {
           while(n%prime[i]==0)
           {
               factor[a++]=prime[i];
               n/=prime[i];
           }
       }
    }
    if(n>1)
    {
        factor[a++]=n;
    }
    printf("Prime Factorization of %d is: ",l);
    for(int i=0; i<a; i++)
    {
        cout << factor[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    scanf("%d",&n);
    seive();
    prime_factorization(n);
    return 0;
}

