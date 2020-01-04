#include<iostream>
using namespace std;
int main()
{
     long int t,j,i,c;
    //int i;
    //int i,j;
    scanf("%ld",&t);
    long int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<t-1;i++)
    {
        c=(t-1)-i;
        for(j=i+1;j<t;j++)
        {
            if(a[i]>=a[j])
            {
                c=c-1;
            }
            else 
            break;
        }
        if(c==0)
        printf("%ld ",a[i]);
    }
    printf("%ld ",a[t-1]);
}
