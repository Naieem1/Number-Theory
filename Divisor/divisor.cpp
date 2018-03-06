#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   scanf("%d",&n);
   vector <int> v;
   int sq=sqrt(n);
   for(int i=1;i<=sq;i++)
   {
       if(n/i==i)
       {
           printf("%d ",i);
       }
       else{
           if(n%i==0)
           {
               printf("%d ",i);
               v.push_back(n/i);
           }
       }
   }
   for(int i=v.size()-1;i>=0;i--)
   {
       printf("%d ",v[i]);
   }
   return 0;
}
/// Time Complexity : O(sqrt(n))
/// MD. Naieem Al Zaman
