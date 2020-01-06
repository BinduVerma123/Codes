#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,p,q,r,l=1,m=1,n=1,c=0,i;
        scanf("%d%d%d%d",&s,&p,&q,&r);
        for(i=1;i<=s;i++)
        {
            if(i%p==0 && i%q!=0 && i%r!=0)
            c++;
            else if(i%p!=0 && i%q==0 && i%r!=0)
            c++;
            else if(i%p!=0 && i%q!=0 && i%r==0)
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
