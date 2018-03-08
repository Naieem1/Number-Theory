/// Compute n! % p
#include<bits/stdc++.h>
using namespace std;
int big_mod(int n,int m)
{
    if(n>=m)
    {
        return 0;
    }
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*(i%m);
    }
    int result=f%m;
    return result;
}
int modFact(int n, int p)
{
    if (n >= p)
    {
        return 0;
    }
    int result = 1;
    for (int i=1; i<=n; i++)
    {
        result = (result * i) % p;
    }
    return result;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ans_of_big_mod=big_mod(n,m);
    ///int ans_of_mod_Fact=modFact(n,m);
    printf("%d\n",ans_of_big_mod);
   /// printf("%d\n",ans_of_mod_Fact);
    main();
    return 0;
}
