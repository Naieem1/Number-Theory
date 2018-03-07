#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }
    int ans=gcd(a,b);
    printf("%d\n",ans);
    main();
    return 0;
}
