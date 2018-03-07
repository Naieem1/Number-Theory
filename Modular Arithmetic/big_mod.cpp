#include <iostream>
#include <cstdio>
using namespace std;
int Big_Mod(int base,int power,int mod)
{
    if(power==0)
    {
        return 1;
    }
    else if(power%2==0)
    {
        int p1=(Big_Mod(base,power/2,mod))%mod;
        return (p1%mod*p1%mod)%mod;
    }
    else if(power%2==1)
    {
        int p1=base%mod;
        int p2=(Big_Mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
}
int main()
{
    int base,power,mod;
    scanf("%d %d %d",&base,&power,&mod);
    int x=Big_Mod(base,power,mod);
    printf("%d\n",x);
    main();
    return 0;
}
