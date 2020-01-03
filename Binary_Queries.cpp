#include <iostream>
using namespace std;
int main()
{
    int n,q,i,k,t,l,r;
    scanf("%d %d",&n,&q);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(q--)
    {
       scanf("%d",&k);
       if(k==1)
       {
           scanf("%d",&t);
           a[t-1] = !a[t-1];
       }
       else if(k==0)
       {
           scanf("%d %d",&l,&r);
           if(a[r-1]==1)
           printf("ODD\n");
           else
           printf("EVEN\n");
       }
    }
}
