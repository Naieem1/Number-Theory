#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1)
        {
            printf("1\n");
        }
        else
        {
            int c=1;
            int remainder=1%n;
            while(remainder!=0)
            {
                remainder=(remainder*10+1)%n;
                c+=1;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
