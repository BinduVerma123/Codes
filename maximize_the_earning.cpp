#include<iostream>
using namespace std;
int main()
{
    int n,s,r,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&s,&r);
        int long long a[s];
        int c=1;
        for(i=0;i<s;i++)
        {
            scanf("%lld",&a[i]);
        }
        int max=a[0];
        for(i=0;i<s;i++)
        {
           if(max<a[i])
           {
            max=a[i];
           c++;
           }
        }
        int z=c*r;
        printf("%d \n",z);
    }
    return 0;
}
