#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
#define max 100
#define size 50
bool number[max/2];
int prime[size];
int factor[size];
int dis[size];
void seive()
{
    int n=size,a=0;
    int sq=sqrt(n*.1)+1;
    memset(number,true,sizeof(number));
    for(int i=3; i<=sq; i+=2)
    {
        if(number[i>>1])
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                number[j>>1]=false;
            }
        }
    }
    prime[0]=2;
    for(int i=3; i<=n; i+=2)
    {
        if(number[i>>1])
        {
            prime[++a]=i;
        }
    }
}
void number_of_devisor(int n)
{
    int sq=sqrt(n*1.0)+1;
    int d=0,ans=1;
    for(int i=0; prime[i]<=sq; i++)
    {
        int c=0;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                c+=1;
                n/=prime[i];
            }
        }
        if(c!=0)
        {
            c+=1;
            dis[d++]=c;
        }
    }
    if(n>1)
    {
        int c=1;
        dis[d++]=c+1;
    }
    ans=1;
    for(int i=0; i<d; i++)
    {
        ans*=dis[i];
    }
    cout<<ans<<endl;
}
int main()
{
    int n;
    scanf("%d",&n);
    seive();
    number_of_devisor(n);
    main();
    return 0;
}
