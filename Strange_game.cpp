#include<iostream>
using namespace std;
int main()
{
    int t,n,k,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int long s=0;
        long int a[n],b[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%ld",&b[i]);
        }
        int max=b[0];
        for(i=0;i<n;i++)
        {
            if(max<b[i])
            max=b[i];
        }
        max=max+1;
        //cout << max<<endl;
        int h;
        //cout << max <<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]<max)
            {
           h=max-a[i];
          s=s+h*k;
        //cout << s<<endl;
          h=0;
            }
        }
        printf("%ld\n",s);
    }
    return 0;
}
